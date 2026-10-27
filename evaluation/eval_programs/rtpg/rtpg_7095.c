// RTPG_7095: vars=3 stmts=2
enum State { SLOW, BLUE, ON };
void test_func(void) {
    int dat17 = 5;
    int tmp98 = 8;
    int res20 = -24;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 67; i++) {
        dat17 = dat17 - 2;
        dat17 = dat17 - res20;
        if (dat17 == -36) {
        dat17 = dat17 - 2;
        }
    }
}
int main() { test_func(); return 0; }

