// RTPG_4620: vars=4 stmts=2
int xn[32];
int yo[32];
enum State { SLOW, ON, GREEN };
void test_func(void) {
    int x31 = 4898;
    int a56 = 30;
    int z78 = -20;
    int val51 = 25;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 32; i++) {
        a56 = xn[i];
        a56 = a56 + -29;
        z78 = x31;
        yo[i] = val51;
    }
}
int main() { test_func(); return 0; }

