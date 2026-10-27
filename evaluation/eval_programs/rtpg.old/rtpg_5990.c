// RTPG_5990: vars=3 stmts=6
void test_func(void) {
    double tmp73 = 76.59;
    int val52 = 1690;
    float cnt1 = 58.75;
    int i;
    for (i = 0; i < 20; i++) {
        val52 = tmp73 + 79;
        val52 = val52 + 1;
        tmp73 = tmp73 + cnt1;
        val52 = val52 - 5;
        cnt1 = tmp73 - cnt1;
        tmp73 = cnt1 + 6;
    }
}
int main() { test_func(); return 0; }

