// RTPG_4431: vars=8 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int a67 = 23032;
    int prev30 = 97;
    int val61 = 35396;
    int z50 = -27;
    int dat50 = 11;
    int b31 = 1;
    int v56 = 75;
    int x23 = 7;
    int i;
    for (i = 0; i < 16; i++) {
        z50 = xn[i];
        b31 = z50 | v56;
        val61 = v56 / prev30;
        val61 = a67 - 74;
        a67 = dat50 & x23;
        b31 = val61 + dat50;
        yo[i] = prev30;
    }
}
int main() { test_func(); return 0; }

