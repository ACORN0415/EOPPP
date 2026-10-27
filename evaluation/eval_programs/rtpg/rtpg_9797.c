// RTPG_9797: vars=5 stmts=7
void test_func(void) {
    int prev1 = -17;
    int val80 = 4;
    int dat91 = 19;
    int cur73 = 63125;
    int prev92 = 56785;
    int i;
    for (i = 0; i < 54; i++) {
        prev92 = prev92 - 3;
        val80 = val80 + 4;
        dat91 = cur73;
        cur73 = val80 % dat91;
        val80 = prev92 & dat91;
        prev1 = prev1 + 6;
        dat91 = dat91 + prev92;
    }
}
int main() { test_func(); return 0; }

