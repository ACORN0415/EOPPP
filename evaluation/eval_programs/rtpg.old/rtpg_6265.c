// RTPG_6265: vars=5 stmts=5
void test_func(void) {
    int res20 = 11120;
    int res87 = 1;
    int res81 = 26022;
    int out19 = 4;
    int x30 = 29;
    int i;
    for (i = 0; i < 12; i++) {
        x30 = res81 - res20;
        res20 = res20 - 30;
        out19 = x30 + res20;
        x30 = out19 - res20;
        res87 = res87 - out19;
    }
}
int main() { test_func(); return 0; }

