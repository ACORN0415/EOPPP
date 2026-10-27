/*
 * eoppp_v2_kernels.c — eoppp_kernels.c 의 32비트 커널 (prefix_sum, first_diff, moving_sum4) 을
 * 0이 아닌 입력으로 2.0 경로에서 검증하기 위한 사본. 64비트 FIR 은 1.0 경로 전용이다.
 */
int ps_in[32] = {5,-3,8,1,0,7,-2,4,9,-6,3,3,1,-8,2,6};
int ps_out[32];
int fd_in[32] = {1,4,9,16,25,36,49,64,81,100,-5,-5,0,7};
int fd_out[32];
int ms_in[32] = {2,7,1,8,2,8,1,8,2,8,4,5,9,0,4,5};
int ms_out[32];
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

int main(void){prefix_sum();first_diff();moving_sum4();return 0;}
