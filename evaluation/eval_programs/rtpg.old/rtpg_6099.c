// RTPG_6099: vars=7 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int lo59 = -16;
    int dat42 = 30442;
    int prev95 = 2;
    int dat90 = 33679;
    int out79 = 34381;
    int acc30 = 52;
    int dat1 = 38;
    int h0 = 4032;
    int sv0 = 0;
    int h1 = -1;
    int sv1 = 0;
    int h2 = 5;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo59 = xn[i];
        out79 = lo59 - prev95;
        acc30 = lo59 * 63858;
        acc30 = out79 - -50;
        lo59 = dat90 * 82;
        prev95 = dat1;
        dat90 = acc30 * 55;
        lo59 = dat1 - acc30;
        lo59 = acc30 - -7;
        yo[i] = dat42;
    }
}
int main() { test_func(); return 0; }

