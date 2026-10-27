// RTPG_8860: vars=6 stmts=3
enum State { FAST, RED, ON };
void test_func(void) {
    int z36 = 65;
    int cur26 = 5;
    int prev41 = -35;
    int a42 = 4;
    int c31 = 9;
    int z3 = 13;
    enum State st = FAST;
    int i;
    for (i = 0; i < 80; i++) {
        cur26 = z3 + prev41;
        c31 = c31 + 2;
        c31 = a42;
        if (z3 == 4) {
        z3 = cur26 - c31;
        }
    }
}
int main() { test_func(); return 0; }

