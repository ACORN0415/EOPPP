// RTPG_2821: vars=6 stmts=8
enum State { SLOW, BLUE, RED };
void test_func(void) {
    int acc40 = 8;
    int y54 = 40356;
    int cur66 = 33853;
    int val95 = 4;
    int cnt15 = 21267;
    int sum39 = 19;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 78; i++) {
        val95 = y54;
        sum39 = cur66 - acc40;
        cur66 = val95 + y54;
        acc40 = acc40 + 2;
        y54 = cnt15;
        sum39 = y54 + cnt15;
        cnt15 = acc40;
        cnt15 = cnt15 + 2;
    }
}
int main() { test_func(); return 0; }

