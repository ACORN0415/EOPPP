// RTPG_4626: vars=6 stmts=3
void test_func(void) {
    int y23 = 1;
    int res71 = 6;
    int dat92 = 46;
    int acc17 = -50;
    int v86 = 25;
    int out61 = 6;
    int i;
    for (i = 0; i < 18; i++) {
        dat92 = v86 + acc17;
        v86 = v86 + 3;
        y23 = acc17;
    }
}
int main() { test_func(); return 0; }

