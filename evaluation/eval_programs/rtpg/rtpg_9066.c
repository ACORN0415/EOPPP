// RTPG_9066: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int v39 = -41;
    int y92 = 23;
    int acc38 = 12263;
    int a54 = 40992;
    int z96 = 51358;
    int lo15 = 3;
    int h0 = 62;
    int sv0 = 0;
    int h1 = 45396;
    int sv1 = 0;
    int h2 = 42937;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        acc38 = xn[i];
        acc38 = lo15 - v39;
        y92 = a54 + z96;
        lo15 = z96 * 2;
        y92 = v39 * -46;
        yo[i] = z96;
    }
}
int main() { test_func(); return 0; }

