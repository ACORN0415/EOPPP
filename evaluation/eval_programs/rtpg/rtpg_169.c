// RTPG_169: vars=8 stmts=4
int xn[32];
int yo[32];
enum State { FAST, ON, OFF };
void test_func(void) {
    int c81 = 23;
    int c30 = 99;
    int val38 = 91;
    int out36 = 42;
    int prev37 = 14;
    int lo99 = 3775;
    int hi23 = 2;
    int acc1 = 48356;
    enum State st = FAST;
    int i;
    for (i = 0; i < 32; i++) {
        c81 = xn[i];
        lo99 = out36 % c30;
        prev37 = val38;
        c30 = val38;
        out36 = prev37 + val38;
        yo[i] = hi23;
    }
}
int main() { test_func(); return 0; }

