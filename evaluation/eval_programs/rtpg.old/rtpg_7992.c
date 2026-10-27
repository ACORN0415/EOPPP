// RTPG_7992: vars=9 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int acc97 = 7647;
    int lo53 = 56369;
    int c93 = -16;
    int out21 = 33122;
    int c12 = 49;
    int y3 = 17399;
    int cur34 = 4;
    int acc92 = 41221;
    int x74 = 58;
    int i;
    for (i = 0; i < 32; i++) {
        lo53 = xn[i];
        acc97 = acc97 + 2;
        acc92 = acc92 - 19;
        c12 = lo53 - acc97;
        x74 = acc97 | c93;
        yo[i] = cur34;
    }
}
int main() { test_func(); return 0; }

