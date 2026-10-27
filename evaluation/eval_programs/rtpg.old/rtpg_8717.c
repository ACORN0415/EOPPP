// RTPG_8717: vars=6 stmts=3
enum State { FAST, RED, ON };
void test_func(void) {
    int a42 = 65;
    int z36 = 5;
    int c31 = -35;
    int z3 = 4;
    int prev41 = 9;
    int cur26 = 13;
    enum State st = FAST;
    int i;
    for (i = 0; i < 80; i++) {
        z36 = cur26 + c31;
        prev41 = prev41 + 2;
        prev41 = z3;
        if (cur26 == 4) {
        cur26 = z36 - prev41;
        }
    }
}
int main() { test_func(); return 0; }

