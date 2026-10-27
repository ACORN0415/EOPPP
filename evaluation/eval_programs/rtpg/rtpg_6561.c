// RTPG_6561: vars=3 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int c30 = -25;
    int a39 = 24;
    int c41 = 19808;
    int i;
    for (i = 0; i < 64; i++) {
        c30 = xn[i];
        c41 = a39 - c41;
        a39 = c41 + a39;
        a39 = c30 - 52874;
        c30 = c30;
        c30 = c41 - c30;
        yo[i] = c30;
    }
}
int main() { test_func(); return 0; }

