// RTPG_1928: vars=3 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int b94 = 65525;
    int res75 = 10;
    int cnt14 = 82;
    int i;
    for (i = 0; i < 32; i++) {
        b94 = xn[i];
        b94 = b94 + cnt14;
        res75 = res75 - cnt14;
        cnt14 = cnt14 - 3;
        yo[i] = res75;
    }
}
int main() { test_func(); return 0; }

