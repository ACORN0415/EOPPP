// RTPG_5952: vars=8 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int y66 = 41;
    int c14 = 76;
    int dat51 = 74;
    int cnt71 = 45257;
    int hi40 = 5;
    int x87 = -41;
    int z92 = 18622;
    int cur62 = 20060;
    int h0 = 59798;
    int sv0 = 0;
    int h1 = 17;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        x87 = xn[i];
        dat51 = y66 + z92;
        cnt71 = hi40 - dat51;
        if (z92 > 26) goto done;
        if (c14 <= 62) {
        hi40 = z92;
        }
        yo[i] = x87;
    }
done:
    z92 = 0;
}
int main() { test_func(); return 0; }

