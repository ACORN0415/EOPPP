// RTPG_110: vars=12 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int b26 = 6;
    int res87 = 26718;
    int val0 = 19;
    int cnt6 = 1805;
    int hi35 = 76;
    int v81 = 32;
    int v85 = 11;
    int val56 = 7;
    int prev45 = 32;
    int acc52 = 8;
    int prev84 = 4;
    int tmp62 = 40661;
    int i;
    for (i = 0; i < 32; i++) {
        b26 = xn[i];
        res87 = res87 + 2;
        hi35 = cnt6;
        prev84 = prev84 + 4;
        if (prev45 < -12) {
        b26 = tmp62;
        }
        yo[i] = prev45;
    }
}
int main() { test_func(); return 0; }

