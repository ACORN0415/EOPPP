// RTPG_2824: vars=3 stmts=7
void test_func(void) {
    int x78 = 28645;
    int cnt52 = 18600;
    int c28 = -42;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 59;
    int sv1 = 0;
    int i;
    for (i = 0; i < 19; i++) {
        c28 = x78 + 8;
        c28 = x78 + cnt52;
        c28 = cnt52 * 11200;
        cnt52 = cnt52 - 2;
        x78 = cnt52;
        c28 = cnt52 * 39870;
        c28 = c28 * 6;
    }
}
int main() { test_func(); return 0; }

