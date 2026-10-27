// RTPG_4677: vars=6 stmts=3
void test_func(void) {
    int acc17 = 1;
    int v86 = 6;
    int y23 = 46;
    int dat92 = -50;
    int res71 = 25;
    int out61 = 6;
    int i;
    for (i = 0; i < 18; i++) {
        y23 = res71 + dat92;
        res71 = res71 + 3;
        acc17 = dat92;
    }
}
int main() { test_func(); return 0; }

