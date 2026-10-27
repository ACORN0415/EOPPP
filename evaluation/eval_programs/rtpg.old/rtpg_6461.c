// RTPG_6461: vars=7 stmts=8
void test_func(void) {
    int dat32 = 8;
    int dat72 = 31968;
    int prev65 = 9;
    int b15 = 0;
    int v98 = -50;
    int b59 = 12;
    int res11 = 8;
    int i;
    for (i = 0; i < 45; i++) {
        dat32 = b59 - b15;
        b15 = b15 - 2;
        prev65 = dat32 - -3;
        dat32 = prev65 + dat32;
        b15 = prev65;
        dat72 = dat32 - res11;
        prev65 = prev65 + 3;
        b59 = res11 - dat72;
    }
}
int main() { test_func(); return 0; }

