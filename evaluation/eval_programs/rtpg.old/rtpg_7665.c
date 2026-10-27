// RTPG_7665: vars=8 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int hi6 = -35;
    int acc66 = 558;
    int res10 = 40;
    int dat71 = 39;
    int x18 = 22;
    int acc98 = 2;
    int cur8 = 83;
    int tmp53 = 11728;
    int i;
    for (i = 0; i < 64; i++) {
        cur8 = xn[i];
        acc66 = dat71 - cur8;
        x18 = acc66 - res10;
        res10 = acc66 + 9;
        cur8 = acc98 + 10;
        acc66 = x18;
        acc98 = dat71;
        dat71 = dat71;
        res10 = acc66 + hi6;
        res10 = res10 - 4;
        yo[i] = tmp53;
    }
}
int main() { test_func(); return 0; }

