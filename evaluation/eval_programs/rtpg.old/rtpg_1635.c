// RTPG_1635: vars=3 stmts=4
int xn[64];
int yo[64];
enum State { FAST, GREEN, RED };
void test_func(void) {
    int out9 = 49;
    int cur5 = 56;
    int y55 = -4;
    enum State st = FAST;
    int i;
    for (i = 0; i < 64; i++) {
        cur5 = xn[i];
        y55 = cur5 - out9;
        cur5 = out9 ^ y55;
        cur5 = out9;
        y55 = out9 + cur5;
        if (y55 >= 40) {
        y55 = cur5;
        }
        yo[i] = cur5;
    }
}
int main() { test_func(); return 0; }

