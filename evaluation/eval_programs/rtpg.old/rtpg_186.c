// RTPG_186: vars=3 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int lo15 = -39;
    int b78 = -8;
    int v71 = 2089;
    int h0 = 20;
    int sv0 = 0;
    int h1 = 54;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        b78 = xn[i];
        b78 = b78 & v71;
        lo15 = v71 ^ lo15;
        v71 = v71 - 4;
        lo15 = lo15 - b78;
        lo15 = v71 - 58039;
        v71 = v71 + 1;
        v71 = v71 | lo15;
        lo15 = lo15 / v71;
        lo15 = lo15 - 1;
        v71 = v71;
        lo15 = lo15 + 2;
        lo15 = v71 * 16;
        yo[i] = v71;
    }
done:
    v71 = 0;
}
int main() { test_func(); return 0; }

