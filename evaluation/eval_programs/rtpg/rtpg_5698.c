// RTPG_5698: vars=5 stmts=3
void test_func(void) {
    int dat30 = 5;
    int sum5 = 4;
    int tmp23 = 90;
    double acc56 = 85.90;
    int acc52 = -11;
    int i;
    for (i = 0; i < 15; i++) {
        sum5 = dat30 + 39901;
        acc52 = acc56 - tmp23;
        sum5 = dat30 | sum5;
    }
}
int main() { test_func(); return 0; }

