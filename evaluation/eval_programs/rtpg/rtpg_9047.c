// RTPG_9047: vars=6 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int cnt53 = 39;
    float v4 = 59.07;
    int a26 = 12125;
    double res7 = 13.02;
    int c49 = 8232;
    int b59 = 41349;
    int h0 = 7363;
    int sv0 = 0;
    int h1 = 10647;
    int sv1 = 0;
    int h2 = -30;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cnt53 = xn[i];
        c49 = a26 - c49;
        a26 = a26 + 2;
        b59 = cnt53 * 11;
        yo[i] = a26;
    }
}
int main() { test_func(); return 0; }

