// RTPG_10: vars=6 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int hi47 = 24;
    int hi88 = 42;
    int z93 = 27;
    int cnt10 = 58;
    int res34 = 9;
    int acc23 = 31;
    int i;
    for (i = 0; i < 32; i++) {
        hi47 = xn[i];
        hi88 = hi88 - 1;
        hi88 = hi88 - z93;
        cnt10 = cnt10 + 5;
        hi88 = z93 - acc23;
        hi47 = hi47 + 5;
        z93 = z93 + acc23;
        yo[i] = hi47;
    }
}
int main() { test_func(); return 0; }

