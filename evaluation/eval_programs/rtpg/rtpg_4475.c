// RTPG_4475: vars=6 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int cnt32 = 21;
    int acc81 = 8;
    int dat40 = 4;
    int c43 = 30;
    int y20 = 34;
    int y22 = 9;
    int h0 = 40850;
    int sv0 = 0;
    int h1 = 83;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        y20 = xn[i];
        c43 = y22;
        cnt32 = c43 * 12;
        dat40 = c43 + y22;
        cnt32 = dat40 * 7;
        dat40 = dat40 * 63837;
        yo[i] = dat40;
    }
}
int main() { test_func(); return 0; }

