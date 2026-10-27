// RTPG_3839: vars=3 stmts=9
int xn[16];
int yo[16];
void test_func(void) {
    int y6 = 8;
    int prev38 = 7;
    int a99 = 29;
    int i;
    for (i = 0; i < 16; i++) {
        a99 = xn[i];
        prev38 = y6 + prev38;
        a99 = a99;
        y6 = y6 - 42;
        prev38 = y6 - prev38;
        prev38 = prev38 - a99;
        prev38 = prev38 + 5;
        y6 = prev38 - 31647;
        y6 = a99 - 5;
        y6 = y6 + prev38;
        yo[i] = y6;
    }
}
int main() { test_func(); return 0; }

