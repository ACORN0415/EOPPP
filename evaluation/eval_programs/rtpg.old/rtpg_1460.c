// RTPG_1460: vars=5 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int prev57 = 1;
    int dat9 = 3;
    int out55 = 6;
    int hi81 = 3;
    int hi62 = 37371;
    int i;
    for (i = 0; i < 64; i++) {
        prev57 = xn[i];
        hi81 = out55;
        hi81 = hi62 + prev57;
        hi81 = prev57 + dat9;
        out55 = out55 - hi62;
        hi81 = hi81 + 1;
        hi81 = hi81 - hi62;
        dat9 = dat9 - dat9;
        dat9 = dat9 + 4;
        yo[i] = hi81;
    }
}
int main() { test_func(); return 0; }

