// RTPG_9548: vars=5 stmts=5
int xn[16];
int yo[16];
enum State { BLUE, OFF, FAST };
void test_func(void) {
    int dat32 = 5;
    int cnt4 = 49;
    int z19 = 51;
    int val95 = 32477;
    int prev31 = 62755;
    enum State st = BLUE;
    int h0 = 28;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        z19 = xn[i];
        prev31 = prev31 * 95;
        z19 = cnt4 * 25;
        val95 = prev31 - -47;
        z19 = prev31 - cnt4;
        prev31 = z19;
        yo[i] = dat32;
    }
}
int main() { test_func(); return 0; }

