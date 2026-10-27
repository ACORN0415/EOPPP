// RTPG_941: vars=3 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int prev1 = 10;
    int tmp87 = 60648;
    int c28 = -4;
    int i;
    for (i = 0; i < 32; i++) {
        tmp87 = xn[i];
        tmp87 = tmp87 + prev1;
        prev1 = tmp87;
        c28 = c28 + 5;
        c28 = tmp87 - prev1;
        tmp87 = tmp87 + 48073;
        tmp87 = c28 + tmp87;
        yo[i] = tmp87;
    }
}
int main() { test_func(); return 0; }

