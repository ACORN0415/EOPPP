// RTPG_1319: vars=4 stmts=8
void test_func(void) {
    int hi88 = -30;
    int acc76 = 3;
    int cnt63 = 18209;
    int tmp1 = 4;
    int i;
    for (i = 0; i < 100; i++) {
        cnt63 = tmp1 - cnt63;
        hi88 = cnt63 + 7;
        hi88 = acc76;
        acc76 = acc76 + tmp1;
        hi88 = acc76;
        cnt63 = tmp1 - hi88;
        tmp1 = tmp1 + 5;
        hi88 = acc76 - cnt63;
        if (cnt63 > 67) {
        tmp1 = tmp1 + hi88;
        }
    }
}
int main() { test_func(); return 0; }

