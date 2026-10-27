// RTPG_8645: vars=10 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int acc17 = 90;
    int prev61 = 12363;
    int out69 = 7;
    int sum32 = 87;
    int hi83 = 4324;
    int x1 = 19;
    int x50 = 61351;
    int c9 = 38;
    int out35 = 93;
    int cnt15 = 12;
    int i;
    for (i = 0; i < 16; i++) {
        c9 = xn[i];
        out35 = c9;
        cnt15 = sum32 + out35;
        x50 = x1;
        acc17 = cnt15 - x50;
        c9 = out35 - 77;
        if (hi83 > -23) goto done;
        yo[i] = out35;
    }
done:
    sum32 = 0;
}
int main() { test_func(); return 0; }

