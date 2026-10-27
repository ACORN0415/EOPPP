/*
 * eoppp_kernels.c — v1.0 DSP kernel suite
 *
 * Each kernel is a single-loop integer function that the v1.0 compiler maps
 * faithfully onto EOPPP (one GPC init slot + one op slot per function).
 * Arrays are streamed through the A-bank in loop-index order.
 *
 *   fir8        8-tap FIR            MAC pipeline, 1-level reduction tree
 *   fir16       16-tap FIR           MAC pipeline, 2-level reduction tree
 *   prefix_sum  running sum          stream in -> loop-carried accumulator -> stream out
 *   first_diff  first difference     stream in, one-sample delay, subtraction
 *   moving_sum4 4-sample moving sum  stream in, 3-sample delay line, 4-input add
 *
 * Fibonacci (control flow) and the 30-tap FIR are in eoppp_test.c.
 */

int x8[32]  = {0x8000, 0, };
long long int y8[32]  = {0, };
int x16[32] = {0x8000, 0, };
long long int y16[32] = {0, };
int ps_in[32];
int ps_out[32];
int fd_in[32];
int fd_out[32];
int ms_in[32];
int ms_out[32];

void fir8(void)
{
    int i;
    long long int xv0, xv1, xv2, xv3, xv4, xv5, xv6, xv7;
    int h0, h1, h2, h3, h4, h5, h6, h7;

    xv0 = 0; xv1 = 0; xv2 = 0; xv3 = 0; xv4 = 0; xv5 = 0; xv6 = 0; xv7 = 0;
    h0 = 0x00010000; h1 = 0x00020000; h2 = 0x00030000; h3 = 0x00040000;
    h4 = 0x00040000; h5 = 0x00030000; h6 = 0x00020000; h7 = 0x00010000;

    for (i = 0; i < 32; i++) {
        xv7 = xv6; xv6 = xv5; xv5 = xv4; xv4 = xv3;
        xv3 = xv2; xv2 = xv1; xv1 = xv0;
        xv0 = x8[i];
        y8[i] = ((long long int)(h0) * xv0 + (long long int)(h1) * xv1 +
                 (long long int)(h2) * xv2 + (long long int)(h3) * xv3 +
                 (long long int)(h4) * xv4 + (long long int)(h5) * xv5 +
                 (long long int)(h6) * xv6 + (long long int)(h7) * xv7) >> 31;
    }
}

void fir16(void)
{
    int i;
    long long int xv0, xv1, xv2, xv3, xv4, xv5, xv6, xv7;
    long long int xv8, xv9, xv10, xv11, xv12, xv13, xv14, xv15;
    int h0, h1, h2, h3, h4, h5, h6, h7;
    int h8, h9, h10, h11, h12, h13, h14, h15;

    xv0 = 0; xv1 = 0; xv2 = 0; xv3 = 0; xv4 = 0; xv5 = 0; xv6 = 0; xv7 = 0;
    xv8 = 0; xv9 = 0; xv10 = 0; xv11 = 0; xv12 = 0; xv13 = 0; xv14 = 0; xv15 = 0;
    h0  = 0xffff0000; h1  = 0x00010000; h2  = 0x00030000; h3  = 0x00050000;
    h4  = 0x00070000; h5  = 0x00090000; h6  = 0x000a0000; h7  = 0x000b0000;
    h8  = 0x000b0000; h9  = 0x000a0000; h10 = 0x00090000; h11 = 0x00070000;
    h12 = 0x00050000; h13 = 0x00030000; h14 = 0x00010000; h15 = 0xffff0000;

    for (i = 0; i < 32; i++) {
        xv15 = xv14; xv14 = xv13; xv13 = xv12; xv12 = xv11;
        xv11 = xv10; xv10 = xv9;  xv9  = xv8;  xv8  = xv7;
        xv7  = xv6;  xv6  = xv5;  xv5  = xv4;  xv4  = xv3;
        xv3  = xv2;  xv2  = xv1;  xv1  = xv0;
        xv0  = x16[i];
        y16[i] = ((long long int)(h0)  * xv0  + (long long int)(h1)  * xv1  +
                  (long long int)(h2)  * xv2  + (long long int)(h3)  * xv3  +
                  (long long int)(h4)  * xv4  + (long long int)(h5)  * xv5  +
                  (long long int)(h6)  * xv6  + (long long int)(h7)  * xv7  +
                  (long long int)(h8)  * xv8  + (long long int)(h9)  * xv9  +
                  (long long int)(h10) * xv10 + (long long int)(h11) * xv11 +
                  (long long int)(h12) * xv12 + (long long int)(h13) * xv13 +
                  (long long int)(h14) * xv14 + (long long int)(h15) * xv15) >> 31;
    }
}

void prefix_sum(void)
{
    int acc = 0;
    int i;
    for (i = 0; i < 32; i++) {
        acc = acc + ps_in[i];
        ps_out[i] = acc;
    }
}

void first_diff(void)
{
    int prev = 0;
    int i;
    for (i = 0; i < 32; i++) {
        fd_out[i] = fd_in[i] - prev;
        prev = fd_in[i];
    }
}

void moving_sum4(void)
{
    int x1 = 0, x2 = 0, x3 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        ms_out[i] = ms_in[i] + x1 + x2 + x3;
        x3 = x2;
        x2 = x1;
        x1 = ms_in[i];
    }
}

int main(void)
{
    fir8();
    fir16();
    prefix_sum();
    first_diff();
    moving_sum4();
    return 0;
}
