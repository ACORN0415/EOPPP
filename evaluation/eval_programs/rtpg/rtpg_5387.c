// RTPG_5387: vars=7 stmts=4
enum State { OFF, SLOW, RED };
void test_func(void) {
    int v60 = 54503;
    int val90 = 9;
    int c21 = 2;
    int val2 = -36;
    int v51 = -24;
    int val83 = 1;
    int tmp72 = 6;
    enum State st = OFF;
    int i;
    for (i = 0; i < 75; i++) {
        v60 = val90 - c21;
        val2 = val2 + 4;
        tmp72 = val83 + tmp72;
        val90 = val90 - v60;
        if (c21 > 30) {
        val2 = c21 - 64;
        }
    }
}
int main() { test_func(); return 0; }

