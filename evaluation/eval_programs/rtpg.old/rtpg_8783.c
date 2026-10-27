// RTPG_8783: vars=5 stmts=3
int xn[32];
int yo[32];
enum State { SLOW, OFF, ON };
void test_func(void) {
    int acc31 = 2241;
    int hi30 = 72;
    int lo88 = 18;
    int lo56 = 7;
    int val84 = 14;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 32; i++) {
        acc31 = xn[i];
        lo88 = val84;
        lo56 = lo56 - 1;
        lo88 = lo56;
        if (hi30 == -37) {
        lo56 = lo56 - hi30;
        }
        yo[i] = hi30;
    }
}
int main() { test_func(); return 0; }

