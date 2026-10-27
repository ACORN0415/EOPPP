// RTPG_8843: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int prev69 = 48495;
    int out31 = 43261;
    int out4 = 56445;
    int v18 = 92;
    int x65 = 34;
    int cnt47 = 16100;
    int a30 = 70;
    int cur64 = 31;
    int i;
    for (i = 0; i < 64; i++) {
        prev69 = xn[i];
        x65 = a30;
        v18 = v18 - 1;
        x65 = a30 - cnt47;
        cnt47 = cnt47 + 24;
        cur64 = out4 - v18;
        if (prev69 <= 46) {
        out31 = v18 + 41;
        }
        yo[i] = out4;
    }
}
int main() { test_func(); return 0; }

