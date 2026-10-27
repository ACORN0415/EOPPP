// RTPG_6191: vars=6 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int hi14 = 41;
    int hi44 = 11071;
    int x92 = 54626;
    int cur98 = -5;
    int lo21 = 10;
    int acc18 = 61;
    int h0 = 37455;
    int sv0 = 0;
    int h1 = -7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo21 = xn[i];
        acc18 = x92 * 50;
        cur98 = x92 * -4;
        acc18 = acc18 + 2;
        hi44 = acc18;
        acc18 = cur98 * 9;
        acc18 = hi14 * -31;
        hi44 = lo21 - cur98;
        yo[i] = cur98;
    }
}
int main() { test_func(); return 0; }

