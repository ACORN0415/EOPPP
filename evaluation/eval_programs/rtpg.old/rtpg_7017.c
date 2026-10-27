// RTPG_7017: vars=3 stmts=2
enum State { SLOW, BLUE, ON };
void test_func(void) {
    int tmp98 = 5;
    int res20 = 8;
    int dat17 = -24;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 67; i++) {
        tmp98 = tmp98 - 2;
        tmp98 = tmp98 - dat17;
        if (tmp98 == -36) {
        tmp98 = tmp98 - 2;
        }
    }
}
int main() { test_func(); return 0; }

