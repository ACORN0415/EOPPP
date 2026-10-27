// RTPG_7662: vars=6 stmts=12
int xn[16];
int yo[16];
enum State { BLUE, SLOW, OFF };
void test_func(void) {
    int hi91 = 78;
    int res30 = 2;
    int y43 = 5428;
    int cur34 = 73;
    int a30 = 24212;
    int v47 = 30419;
    enum State st = BLUE;
    int h0 = 86;
    int sv0 = 0;
    int h1 = 53045;
    int sv1 = 0;
    int h2 = -1;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        v47 = xn[i];
        cur34 = y43 / res30;
        a30 = hi91 * 48;
        res30 = hi91 + cur34;
        v47 = a30 - 55519;
        a30 = y43 + v47;
        cur34 = a30 - v47;
        cur34 = hi91;
        a30 = a30 + 3;
        cur34 = hi91 ^ y43;
        v47 = a30 * 46977;
        res30 = res30 & a30;
        y43 = y43 - res30;
        yo[i] = v47;
    }
}
int main() { test_func(); return 0; }

