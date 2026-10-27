// RTPG_5065: vars=3 stmts=7
void test_func(void) {
    int cnt5 = 36058;
    int sum0 = 43769;
    int lo36 = 29;
    int i;
    for (i = 0; i < 46; i++) {
        cnt5 = lo36 | cnt5;
        sum0 = cnt5 + 9;
        sum0 = cnt5 + 64027;
        lo36 = sum0 - 0;
        cnt5 = cnt5 - 3;
        lo36 = sum0 | sum0;
        lo36 = sum0 | cnt5;
    }
}
int main() { test_func(); return 0; }

