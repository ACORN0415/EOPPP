// RTPG_6053: vars=8 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int hi40 = 41;
    int c14 = 76;
    int z92 = 74;
    int cur62 = 45257;
    int cnt71 = 5;
    int dat51 = -41;
    int y66 = 18622;
    int x87 = 20060;
    int h0 = 59798;
    int sv0 = 0;
    int h1 = 17;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat51 = xn[i];
        z92 = hi40 + y66;
        cur62 = cnt71 - z92;
        if (y66 > 26) goto done;
        if (c14 <= 62) {
        cnt71 = y66;
        }
        yo[i] = dat51;
    }
done:
    y66 = 0;
}
int main() { test_func(); return 0; }

