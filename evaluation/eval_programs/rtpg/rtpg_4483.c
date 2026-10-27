// RTPG_4483: vars=7 stmts=12
void test_func(void) {
    int prev99 = -50;
    int v15 = 6;
    int out58 = 5;
    int cnt93 = -22;
    int c93 = 26;
    int cur91 = 11;
    int prev20 = 52;
    int i;
    for (i = 0; i < 19; i++) {
        cur91 = cur91 + 3;
        c93 = c93;
        out58 = prev99 + cnt93;
        cur91 = out58 - -20;
        v15 = cnt93 - out58;
        c93 = c93 - out58;
        prev99 = v15 + prev99;
        v15 = cur91;
        out58 = out58 + 1;
        prev20 = v15;
        prev20 = prev20 + 3;
        cnt93 = out58 + prev20;
    }
}
int main() { test_func(); return 0; }

