// RTPG_3186: vars=5 stmts=9
int xn[64];
int yo[64];
enum State { BLUE, SLOW, OFF };
void test_func(void) {
    int v45 = 8;
    int val91 = 14780;
    int tmp30 = 5;
    int prev90 = 3;
    int dat6 = 3;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 64; i++) {
        prev90 = xn[i];
        tmp30 = tmp30;
        tmp30 = tmp30;
        tmp30 = dat6 - prev90;
        val91 = v45 + dat6;
        prev90 = prev90 + 3;
        prev90 = v45 - prev90;
        val91 = dat6 - 15;
        val91 = v45 - tmp30;
        val91 = dat6 - v45;
        if (dat6 < -6) {
        prev90 = prev90 + 3;
        }
        yo[i] = v45;
    }
}
int main() { test_func(); return 0; }

