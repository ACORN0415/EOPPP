// RTPG_1468: vars=9 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int acc66 = 12767;
    int tmp49 = 40;
    int out90 = 6;
    int tmp46 = 27;
    int cur76 = 20;
    int acc3 = 0;
    int y18 = 8;
    int prev54 = 10;
    int dat31 = 35;
    int h0 = 53;
    int sv0 = 0;
    int h1 = 40;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat31 = xn[i];
        out90 = prev54 - acc3;
        acc66 = cur76;
        dat31 = tmp46 + -39;
        prev54 = acc66;
        tmp49 = cur76 * 26742;
        yo[i] = acc66;
    }
}
int main() { test_func(); return 0; }

