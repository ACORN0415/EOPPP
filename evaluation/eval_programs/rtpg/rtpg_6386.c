// RTPG_6386: vars=10 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int out65 = 10;
    int c53 = 13;
    int cnt23 = 11;
    int res52 = 32;
    int val56 = 30037;
    int hi37 = 0;
    int c58 = -28;
    int out44 = 40134;
    int val57 = 60761;
    int tmp97 = -37;
    int i;
    for (i = 0; i < 64; i++) {
        cnt23 = xn[i];
        val57 = c53 + 5;
        val56 = res52;
        hi37 = hi37 + 5;
        val56 = val57 - 6;
        out65 = out65 + cnt23;
        c58 = c58 + 5;
        res52 = out65;
        out44 = val56 + tmp97;
        if (out44 < -40) {
        tmp97 = cnt23 - c58;
        }
        yo[i] = c53;
    }
}
int main() { test_func(); return 0; }

