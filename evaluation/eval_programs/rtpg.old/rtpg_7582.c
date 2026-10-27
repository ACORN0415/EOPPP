// RTPG_7582: vars=6 stmts=12
int xn[16];
int yo[16];
enum State { BLUE, SLOW, OFF };
void test_func(void) {
    int hi91 = 78;
    int v47 = 2;
    int cur34 = 5428;
    int a30 = 73;
    int res30 = 24212;
    int y43 = 30419;
    enum State st = BLUE;
    int h0 = 86;
    int sv0 = 0;
    int h1 = 53045;
    int sv1 = 0;
    int h2 = -1;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        y43 = xn[i];
        a30 = cur34 / v47;
        res30 = hi91 * 48;
        v47 = hi91 + a30;
        y43 = res30 - 55519;
        res30 = cur34 + y43;
        a30 = res30 - y43;
        a30 = hi91;
        res30 = res30 + 3;
        cur34 = hi91 % y43;
        a30 = a30 + 5;
        v47 = a30 | cur34;
        v47 = v47 - 1;
        yo[i] = cur34;
    }
}
int main() { test_func(); return 0; }

