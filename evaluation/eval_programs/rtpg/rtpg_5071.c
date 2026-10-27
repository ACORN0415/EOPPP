// RTPG_5071: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int y53 = 7;
    int cnt89 = 30464;
    int y20 = 3055;
    int hi47 = 35503;
    int cur8 = 30827;
    int i;
    for (i = 0; i < 64; i++) {
        y20 = xn[i];
        y20 = y53 + y20;
        y53 = cur8 + 2;
        hi47 = hi47 - 4;
        cnt89 = cnt89 + 6;
        hi47 = y53 - 38;
        yo[i] = cur8;
    }
}
int main() { test_func(); return 0; }

