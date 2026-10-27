// RTPG_2418: vars=4 stmts=2
void test_func(void) {
    int hi80 = 3;
    int res53 = 35885;
    int hi88 = 60930;
    int lo2 = 48194;
    int h0 = 26;
    int sv0 = 0;
    int h1 = 80;
    int sv1 = 0;
    int i;
    for (i = 0; i < 40; i++) {
        hi88 = lo2 * 60;
        lo2 = hi80 * 14;
        if (hi88 > 86) {
        hi88 = hi88 - 5;
        }
    }
}
int main() { test_func(); return 0; }

