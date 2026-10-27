// RTPG_8894: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int v39 = -41;
    int acc38 = 23;
    int y92 = 12263;
    int z96 = 40992;
    int a54 = 51358;
    int lo15 = 3;
    int h0 = 62;
    int sv0 = 0;
    int h1 = 45396;
    int sv1 = 0;
    int h2 = 42937;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        y92 = xn[i];
        y92 = lo15 - v39;
        acc38 = z96 + a54;
        lo15 = a54 * 2;
        acc38 = v39 * -46;
        yo[i] = a54;
    }
}
int main() { test_func(); return 0; }

