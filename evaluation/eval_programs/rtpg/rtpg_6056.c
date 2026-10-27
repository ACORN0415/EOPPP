// RTPG_6056: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    float x61 = 20.03;
    float hi28 = 15.64;
    int res44 = -16;
    double y9 = 12.43;
    int out50 = -14;
    int tmp42 = 6;
    int c28 = 9;
    int *ptr = &hi28;
    int i;
    for (i = 0; i < 16; i++) {
        y9 = xn[i];
        hi28 = res44 & c28;
        x61 = x61 % tmp42;
        x61 = x61 + 2;
        res44 = res44 - 4;
        *ptr = *ptr + 3;
        if (c28 > 8) {
        tmp42 = tmp42 - 3;
        }
        yo[i] = out50;
    }
}
int main() { test_func(); return 0; }

