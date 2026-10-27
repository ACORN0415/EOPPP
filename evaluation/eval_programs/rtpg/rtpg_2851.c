// RTPG_2851: vars=10 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int lo47 = 8;
    int prev38 = 48603;
    int x0 = 1;
    int prev23 = 0;
    int acc96 = 29;
    int prev11 = 37124;
    int out52 = 48914;
    int cnt87 = 59;
    int c92 = 22;
    int v95 = 41;
    int i;
    for (i = 0; i < 32; i++) {
        prev38 = xn[i];
        out52 = prev23 - 38;
        cnt87 = v95;
        out52 = prev11 + -9;
        out52 = prev11;
        yo[i] = acc96;
    }
}
int main() { test_func(); return 0; }

