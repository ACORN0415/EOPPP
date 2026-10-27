// RTPG_729: vars=3 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int x80 = 18120;
    int lo33 = -24;
    int res85 = 2;
    int h0 = -22;
    int sv0 = 0;
    int h1 = 53379;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res85 = xn[i];
        lo33 = lo33;
        res85 = x80 - lo33;
        res85 = lo33;
        res85 = x80 * 63;
        x80 = lo33 * 10;
        lo33 = lo33 - 3;
        res85 = lo33 - res85;
        res85 = res85 - 5;
        if (res85 > 42037) goto done;
        yo[i] = x80;
    }
done:
    res85 = 0;
}
int main() { test_func(); return 0; }

