// RTPG_1732: vars=10 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int hi32 = 6;
    int cnt50 = 56485;
    int hi2 = 33;
    int dat68 = -13;
    int prev89 = -36;
    int cnt66 = 32;
    int val93 = 36;
    int c96 = 19;
    int sum31 = 8;
    int sum10 = 0;
    int h0 = 40280;
    int sv0 = 0;
    int h1 = 22367;
    int sv1 = 0;
    int h2 = 41;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        prev89 = xn[i];
        hi2 = dat68 + hi32;
        cnt66 = dat68 - val93;
        cnt66 = cnt66 - 5;
        sum31 = cnt66;
        prev89 = hi32;
        cnt50 = prev89 * 2125;
        dat68 = dat68 - 4;
        yo[i] = hi2;
    }
}
int main() { test_func(); return 0; }

