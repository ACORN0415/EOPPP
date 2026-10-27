// RTPG_8531: vars=7 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int v63 = 27;
    int acc66 = 7;
    int tmp86 = -25;
    int tmp44 = 15431;
    int b99 = 20;
    int hi60 = 5;
    int out93 = 17;
    int h0 = 56038;
    int sv0 = 0;
    int h1 = 77;
    int sv1 = 0;
    int h2 = 7;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        v63 = xn[i];
        b99 = v63 * 50517;
        tmp86 = out93 - b99;
        acc66 = hi60 - tmp86;
        v63 = tmp86 | tmp86;
        acc66 = hi60 + hi60;
        if (out93 > 30) {
        acc66 = v63 - acc66;
        }
        yo[i] = v63;
    }
}
int main() { test_func(); return 0; }

