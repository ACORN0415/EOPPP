// RTPG_2095: vars=7 stmts=8
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int acc96 = 5;
    int y15 = 87;
    int c38 = 11389;
    int cnt11 = 0;
    int acc73 = 5;
    int out68 = 10;
    int hi36 = 55919;
    int h0 = 24;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        out68 = xn[i];
        y15 = xn[idx_arr[i]];
        acc96 = c38 + out68;
        y15 = acc96;
        acc96 = acc96 + c38;
        c38 = cnt11;
        acc73 = out68 * 52081;
        acc96 = c38;
        hi36 = acc96 - acc96;
        acc96 = hi36 - c38;
        yo[i] = acc73;
    }
}
int main() { test_func(); return 0; }

