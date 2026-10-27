// RTPG_1057: vars=6 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int c72 = 22;
    int val8 = 19;
    int dat18 = 8;
    int a10 = 16276;
    int b6 = -7;
    int out68 = -20;
    int h0 = 36256;
    int sv0 = 0;
    int h1 = 28838;
    int sv1 = 0;
    int h2 = 13;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        a10 = xn[i];
        a10 = a10 * 13;
        b6 = val8 - b6;
        if (val8 > 29993) goto done;
        yo[i] = dat18;
    }
done:
    out68 = 0;
}
int main() { test_func(); return 0; }

