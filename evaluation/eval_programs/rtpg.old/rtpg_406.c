// RTPG_406: vars=5 stmts=9
int xn[16];
int yo[16];
enum State { SLOW, BLUE, ON };
void test_func(void) {
    int hi1 = 7654;
    int out8 = 20;
    int prev44 = 5;
    int a16 = 19172;
    int dat75 = 54847;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 16; i++) {
        out8 = xn[i];
        out8 = out8 + 3;
        out8 = hi1 - dat75;
        a16 = a16 - 14;
        a16 = out8 - prev44;
        out8 = hi1 + dat75;
        out8 = out8 + 0;
        prev44 = a16 + prev44;
        a16 = dat75 - out8;
        out8 = hi1 - a16;
        yo[i] = prev44;
    }
}
int main() { test_func(); return 0; }

