// RTPG_5955: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    float x61 = 20.03;
    float tmp42 = 15.64;
    int out50 = -16;
    double hi28 = 12.43;
    int y9 = -14;
    int c28 = 6;
    int res44 = 9;
    int *ptr = &tmp42;
    int i;
    for (i = 0; i < 16; i++) {
        hi28 = xn[i];
        tmp42 = out50 & c28;
        x61 = x61 % y9;
        x61 = x61 + 2;
        out50 = out50 - 4;
        *ptr = *ptr + 3;
        if (res44 > 8) {
        c28 = c28 - 3;
        }
        yo[i] = y9;
    }
}
int main() { test_func(); return 0; }

