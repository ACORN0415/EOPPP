// RTPG_7003: vars=4 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int acc82 = 8;
    int lo3 = 63378;
    int tmp49 = 64632;
    int x76 = 6;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 17;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        x76 = xn[i];
        x76 = lo3 * 10;
        x76 = lo3 * 11;
        acc82 = acc82 - x76;
        x76 = x76;
        acc82 = lo3 * 51782;
        tmp49 = tmp49;
        x76 = lo3 - x76;
        if (x76 > 36513) goto done;
        yo[i] = x76;
    }
done:
    x76 = 0;
}
int main() { test_func(); return 0; }

