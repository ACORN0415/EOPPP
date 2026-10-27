// RTPG_5231: vars=5 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int sum83 = 48;
    int y40 = 4;
    int hi26 = -9;
    int prev66 = 40;
    int hi42 = -44;
    int *ptr = &hi26;
    int i;
    for (i = 0; i < 16; i++) {
        y40 = xn[i];
        hi26 = hi26 + 4;
        y40 = hi42;
        prev66 = sum83 + hi26;
        prev66 = sum83 - 2;
        prev66 = hi26 - hi42;
        y40 = prev66;
        *ptr = *ptr + 5;
        if (y40 <= 65) {
        prev66 = sum83 - hi42;
        }
        yo[i] = prev66;
    }
}
int main() { test_func(); return 0; }

