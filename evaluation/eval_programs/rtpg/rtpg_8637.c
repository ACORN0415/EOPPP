// RTPG_8637: vars=6 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int hi29 = 27565;
    int a34 = 12;
    int hi16 = -26;
    int prev18 = 44780;
    int z49 = 54;
    int hi27 = 62320;
    int i;
    for (i = 0; i < 16; i++) {
        a34 = xn[i];
        hi29 = z49 + hi27;
        z49 = z49 + 1;
        hi16 = hi16 + 5;
        prev18 = prev18 + 3;
        hi29 = z49 + hi16;
        if (hi27 != -43) {
        hi16 = prev18;
        }
        yo[i] = z49;
    }
}
int main() { test_func(); return 0; }

