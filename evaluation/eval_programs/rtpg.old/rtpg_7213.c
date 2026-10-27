// RTPG_7213: vars=8 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int sum56 = 61407;
    int v39 = 6;
    int v90 = 29;
    int y40 = -14;
    int res69 = 39108;
    int a82 = 43505;
    int dat44 = 28;
    int cnt42 = 11903;
    int h0 = 23;
    int sv0 = 0;
    int h1 = 11;
    int sv1 = 0;
    int h2 = -42;
    int sv2 = 0;
    int h3 = 41;
    int sv3 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cnt42 = xn[i];
        a82 = cnt42 * 8;
        v39 = a82 * 29516;
        v39 = y40 * 61651;
        v90 = a82 * 33;
        v90 = v39 * 21054;
        v90 = y40;
        dat44 = v90 * 63;
        dat44 = res69 - dat44;
        y40 = sum56 - 0;
        res69 = dat44 * -50;
        sum56 = v90 + 41804;
        dat44 = dat44 - 2;
        yo[i] = v39;
    }
done:
    y40 = 0;
}
int main() { test_func(); return 0; }

