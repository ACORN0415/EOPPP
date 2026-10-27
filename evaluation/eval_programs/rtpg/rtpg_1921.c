// RTPG_1921: vars=4 stmts=5
void test_func(void) {
    float prev37 = 26.67;
    int cnt43 = -4;
    int c90 = 81;
    int hi56 = 12;
    int i;
    for (i = 0; i < 49; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        prev37 = c90;
        cnt43 = hi56 - cnt43;
        hi56 = c90 + cnt43;
        c90 = c90 - 4;
        cnt43 = hi56 + cnt43;
        }
    }
}
int main() { test_func(); return 0; }

