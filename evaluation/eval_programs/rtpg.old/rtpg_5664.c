// RTPG_5664: vars=5 stmts=2
enum State { SLOW, OFF, ON };
void test_func(void) {
    int dat50 = 26308;
    int cur2 = 55;
    int hi36 = 57;
    int x94 = 3;
    int val27 = 21;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 27; i++) {
        x94 = x94;
        dat50 = x94;
    }
}
int main() { test_func(); return 0; }

