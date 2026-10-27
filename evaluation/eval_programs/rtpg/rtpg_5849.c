// RTPG_5849: vars=6 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int hi70 = -14;
    int x57 = 0;
    int val64 = 32;
    int y18 = 39;
    int acc56 = 9;
    int dat28 = 36;
    int i;
    for (i = 0; i < 32; i++) {
        hi70 = xn[i];
        x57 = x57 - 1;
        hi70 = x57 + 31;
        y18 = dat28 - acc56;
        y18 = y18 + 5;
        hi70 = hi70 - 5;
        yo[i] = val64;
    }
}
int main() { test_func(); return 0; }

