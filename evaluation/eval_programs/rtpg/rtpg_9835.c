// RTPG_9835: vars=6 stmts=7
void test_func(void) {
    int cur99 = 2;
    int c10 = -46;
    int hi63 = 1;
    int cnt7 = 31;
    int lo48 = 28;
    int hi96 = 54;
    int i;
    for (i = 0; i < 54; i++) {
        hi63 = c10 - c10;
        c10 = cnt7 - hi96;
        hi96 = hi96 + cur99;
        hi63 = c10 - lo48;
        lo48 = lo48;
        hi63 = hi63 + hi63;
        cnt7 = lo48 + cur99;
    }
}
int main() { test_func(); return 0; }

