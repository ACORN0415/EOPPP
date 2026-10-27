// RTPG_1599: vars=3 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int hi83 = 61;
    int prev28 = 78;
    int dat15 = 23531;
    int h0 = 27;
    int sv0 = 0;
    int h1 = 49012;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        hi83 = xn[i];
        dat15 = dat15 - hi83;
        prev28 = prev28 * 39;
        dat15 = hi83 + 73;
        dat15 = dat15 - 2;
        prev28 = dat15;
        dat15 = hi83;
        prev28 = dat15 * 6;
        prev28 = hi83 + prev28;
        yo[i] = prev28;
    }
}
int main() { test_func(); return 0; }

