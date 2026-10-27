// RTPG_1734: vars=8 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int c53 = 6;
    int z7 = 9;
    int b40 = -5;
    int b72 = 16;
    int tmp79 = 4;
    int tmp81 = 96;
    int y66 = 11973;
    int cur34 = 5;
    int i;
    for (i = 0; i < 16; i++) {
        cur34 = xn[i];
        c53 = tmp79 - z7;
        b40 = y66 + z7;
        yo[i] = tmp81;
    }
}
int main() { test_func(); return 0; }

