// RTPG_209: vars=9 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int z4 = 52914;
    int v58 = 58963;
    int tmp45 = 2;
    int cur27 = 47;
    int y41 = 75;
    int x14 = 73;
    int cnt70 = -47;
    int out99 = 10877;
    int out86 = 66;
    int h0 = -22;
    int sv0 = 0;
    int h1 = -34;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        z4 = xn[i];
        out86 = out86 + 1;
        v58 = v58 + 1;
        y41 = x14 ^ out99;
        cur27 = z4 * 61;
        out86 = tmp45 * -43;
        y41 = v58 ^ tmp45;
        cur27 = tmp45 | cur27;
        tmp45 = z4 / y41;
        out86 = z4 * 85;
        z4 = y41 - y41;
        if (cur27 > 2) goto done;
        yo[i] = v58;
    }
done:
    out86 = 0;
}
int main() { test_func(); return 0; }

