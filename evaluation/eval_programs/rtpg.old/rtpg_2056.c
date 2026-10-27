// RTPG_2056: vars=4 stmts=2
void test_func(void) {
    int prev43 = -50;
    int cur6 = 41;
    int cur83 = 72;
    int lo87 = 71;
    int i;
    for (i = 0; i < 42; i++) {
        cur6 = lo87 + 9;
        cur83 = lo87 + cur83;
    }
}
int main() { test_func(); return 0; }

