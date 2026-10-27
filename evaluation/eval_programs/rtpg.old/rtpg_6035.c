// RTPG_6035: vars=3 stmts=7
enum State { SLOW, OFF, ON };
void test_func(void) {
    int x22 = 8;
    int v36 = 94;
    int val67 = 19;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 89; i++) {
        val67 = val67;
        val67 = val67;
        val67 = val67;
        val67 = val67 + v36;
        v36 = x22 + 31;
        val67 = v36 ^ v36;
        x22 = x22 - 5;
        if (x22 >= 50) {
        v36 = v36 + 3;
        }
    }
}
int main() { test_func(); return 0; }

