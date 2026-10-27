// RTPG_4418: vars=6 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int c43 = 21;
    int y22 = 8;
    int acc81 = 4;
    int y20 = 30;
    int cnt32 = 34;
    int dat40 = 9;
    int h0 = 40850;
    int sv0 = 0;
    int h1 = 83;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cnt32 = xn[i];
        y20 = dat40;
        c43 = y20 * 12;
        acc81 = y20 + dat40;
        c43 = acc81 * 7;
        acc81 = acc81 * 63837;
        yo[i] = acc81;
    }
}
int main() { test_func(); return 0; }

