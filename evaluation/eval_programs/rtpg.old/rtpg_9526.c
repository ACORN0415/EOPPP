// RTPG_9526: vars=3 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int a53 = 16;
    int prev67 = -20;
    int cnt75 = -22;
    int i;
    for (i = 0; i < 16; i++) {
        prev67 = xn[i];
        cnt75 = cnt75;
        cnt75 = cnt75 - 4;
        cnt75 = a53 + cnt75;
        prev67 = a53 + prev67;
        cnt75 = cnt75 + 1;
        cnt75 = prev67;
        yo[i] = a53;
    }
}
int main() { test_func(); return 0; }

