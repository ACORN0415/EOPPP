// RTPG_1010: vars=10 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int tmp35 = 26435;
    int c63 = 81;
    int hi5 = -33;
    int dat57 = 39;
    int a0 = 10;
    int cur10 = 12;
    int a52 = 19722;
    int x23 = 72;
    int acc35 = -30;
    int cur51 = 92;
    int i;
    for (i = 0; i < 16; i++) {
        x23 = xn[i];
        hi5 = dat57;
        dat57 = cur51;
        c63 = tmp35 + a0;
        cur10 = dat57;
        c63 = acc35 - cur51;
        cur51 = dat57 - 2;
        tmp35 = x23 - hi5;
        yo[i] = cur51;
    }
}
int main() { test_func(); return 0; }

