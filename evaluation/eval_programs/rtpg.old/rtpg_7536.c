// RTPG_7536: vars=5 stmts=8
void test_func(void) {
    int hi88 = -47;
    int c92 = -8;
    int y23 = 63430;
    int cur55 = 30;
    int a17 = 51257;
    int i;
    for (i = 0; i < 48; i++) {
        int j;
        for (j = 0; j < 20; j++) {
        hi88 = c92;
        c92 = hi88;
        hi88 = hi88 + a17;
        c92 = c92 + hi88;
        hi88 = c92 - cur55;
        hi88 = c92;
        y23 = hi88 + 59120;
        cur55 = y23;
        }
    }
}
int main() { test_func(); return 0; }

