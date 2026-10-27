// RTPG_5571: vars=4 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int c78 = 3667;
    int res62 = 6;
    int v31 = 2;
    int cnt14 = 4;
    int h0 = 79;
    int sv0 = 0;
    int h1 = -46;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cnt14 = xn[i];
        c78 = c78 + cnt14;
        v31 = cnt14 - res62;
        v31 = cnt14 * 2;
        v31 = c78;
        res62 = c78 + 0;
        res62 = v31;
        res62 = res62 - 5;
        c78 = c78 * 17894;
        cnt14 = v31 * 96;
        cnt14 = cnt14 + 5;
        cnt14 = cnt14 - 1;
        yo[i] = v31;
    }
}
int main() { test_func(); return 0; }

