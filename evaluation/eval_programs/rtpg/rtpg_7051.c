// RTPG_7051: vars=9 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int y3 = 1;
    int res89 = 46;
    int sum92 = 51;
    int b65 = 18;
    int tmp58 = 91;
    int a73 = 53;
    int c13 = 1;
    int res60 = 1;
    int cnt56 = 61;
    int h0 = 28;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int h2 = 9637;
    int sv2 = 0;
    int h3 = 2;
    int sv3 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        sum92 = xn[i];
        y3 = y3 + 3;
        a73 = res60 * 16;
        cnt56 = res89 - b65;
        if (cnt56 > 92) goto done;
        if (sum92 <= 63) {
        c13 = c13 - 4;
        }
        yo[i] = sum92;
    }
done:
    res60 = 0;
}
int main() { test_func(); return 0; }

