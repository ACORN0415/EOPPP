// RTPG_2519: vars=6 stmts=8
void test_func(void) {
    int x58 = 0;
    int dat15 = 4;
    int y54 = 6;
    int sum24 = 24;
    int hi38 = 38;
    int prev7 = 80;
    int i;
    for (i = 0; i < 68; i++) {
        sum24 = dat15 - sum24;
        hi38 = sum24;
        hi38 = y54 + 7;
        y54 = prev7 + 72;
        dat15 = x58;
        prev7 = prev7 - dat15;
        y54 = hi38 + prev7;
        x58 = prev7 - 45;
    }
}
int main() { test_func(); return 0; }

