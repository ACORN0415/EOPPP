// RTPG_7679: vars=4 stmts=7
enum State { SLOW, BLUE, ON };
void test_func(void) {
    int sum0 = 7;
    int tmp29 = 10;
    int val61 = 53537;
    int c79 = -31;
    enum State st = SLOW;
    int *ptr = &sum0;
    int i;
    for (i = 0; i < 35; i++) {
        switch (sum0) {
            case 0: c79 = 16; break;
            case 1: tmp29 = 28380; break;
            default: break;
        }
        sum0 = sum0 + 1;
    }
}
int main() { test_func(); return 0; }

