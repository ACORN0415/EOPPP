// RTPG_3896: vars=4 stmts=3
void test_func(void) {
    int b53 = 9;
    int res28 = 24;
    int c17 = 15;
    int res39 = 83;
    int i;
    for (i = 0; i < 40; i++) {
        res39 = b53 - -35;
        c17 = b53 + res28;
        b53 = res28 - res39;
    }
}
int main() { test_func(); return 0; }

