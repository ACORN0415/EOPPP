// RTPG_1916: vars=6 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int acc61 = 27059;
    int hi76 = -30;
    int b11 = 2;
    int val95 = 55880;
    int z34 = -7;
    int z87 = 26859;
    int *ptr = &z87;
    int h0 = 53345;
    int sv0 = 0;
    int h1 = 44;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        acc61 = xn[i];
        hi76 = hi76 + 1;
        val95 = b11 * 3768;
        z34 = val95 * 14976;
        val95 = val95 + 2;
        z87 = val95 - 63363;
        b11 = acc61;
        acc61 = acc61 - 1;
        *ptr = *ptr + 1;
        yo[i] = acc61;
    }
}
int main() { test_func(); return 0; }

