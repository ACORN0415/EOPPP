// RTPG_197: vars=7 stmts=6
enum State { FAST, SLOW, OFF };
void test_func(void) {
    int cur22 = 2582;
    int lo25 = -15;
    int c88 = 30;
    int tmp65 = 38420;
    int res60 = -48;
    int tmp42 = -30;
    int out88 = 9519;
    enum State st = FAST;
    int i;
    for (i = 0; i < 23; i++) {
        cur22 = lo25 + 5;
        c88 = c88;
        res60 = cur22 - res60;
        tmp42 = c88 + lo25;
        tmp42 = c88;
        tmp65 = cur22;
    }
}
int main() { test_func(); return 0; }

