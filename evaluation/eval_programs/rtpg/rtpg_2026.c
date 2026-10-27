// RTPG_2026: vars=7 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int z2 = 17;
    int y23 = 54;
    int val37 = 18968;
    int a81 = 38387;
    int x84 = 31236;
    int cnt21 = 10;
    int z97 = 2;
    int i;
    for (i = 0; i < 16; i++) {
        y23 = xn[i];
        val37 = y23 | z97;
        cnt21 = x84 & val37;
        z2 = a81 & z97;
        yo[i] = z97;
    }
}
int main() { test_func(); return 0; }

