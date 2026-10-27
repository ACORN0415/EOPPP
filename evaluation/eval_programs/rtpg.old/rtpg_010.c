// RTPG_10: vars=6 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int hi88 = 24;
    int acc23 = 42;
    int res34 = 27;
    int cnt10 = 58;
    int hi47 = 9;
    int z93 = 31;
    int i;
    for (i = 0; i < 32; i++) {
        hi88 = xn[i];
        acc23 = acc23 - 1;
        acc23 = acc23 - res34;
        cnt10 = cnt10 + 5;
        acc23 = res34 - z93;
        hi88 = hi88 + 5;
        res34 = res34 + z93;
        yo[i] = hi88;
    }
}
int main() { test_func(); return 0; }

