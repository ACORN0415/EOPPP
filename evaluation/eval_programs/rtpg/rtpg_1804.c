// RTPG_1804: vars=6 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int v78 = 28249;
    int c2 = -45;
    int out72 = 17287;
    int lo63 = 9;
    int tmp69 = 64;
    int x16 = 9;
    int h0 = 61311;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int h2 = 4;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        x16 = xn[i];
        tmp69 = lo63;
        out72 = out72 + 2;
        lo63 = c2 * -17;
        tmp69 = out72 - lo63;
        out72 = out72 + 2;
        tmp69 = v78 * -27;
        out72 = out72 + 2;
        x16 = x16 * 90;
        c2 = x16 * 39;
        c2 = v78;
        v78 = v78 + 5;
        v78 = v78 + 4;
        yo[i] = x16;
    }
}
int main() { test_func(); return 0; }

