// RTPG_2955: vars=6 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int y85 = 0;
    int y77 = 47873;
    int x12 = -2;
    int a17 = 26118;
    int hi53 = 55891;
    int out16 = 9;
    int *ptr = &y77;
    int h0 = 16;
    int sv0 = 0;
    int h1 = 36;
    int sv1 = 0;
    int h2 = 3;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        out16 = xn[i];
        out16 = out16 * 4;
        a17 = a17 - 61;
        hi53 = y77;
        out16 = a17 & hi53;
        hi53 = hi53 - 3;
        out16 = y77 + y77;
        a17 = a17 + y85;
        a17 = out16 | a17;
        *ptr = *ptr + 1;
        yo[i] = y77;
    }
}
int main() { test_func(); return 0; }

