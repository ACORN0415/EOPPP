// RTPG_4671: vars=4 stmts=2
int xn[32];
int yo[32];
enum State { SLOW, ON, GREEN };
void test_func(void) {
    int a56 = 4898;
    int z78 = 30;
    int x31 = -20;
    int val51 = 25;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 32; i++) {
        z78 = xn[i];
        z78 = z78 + -29;
        x31 = a56;
        yo[i] = val51;
    }
}
int main() { test_func(); return 0; }

