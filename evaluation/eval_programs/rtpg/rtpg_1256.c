// RTPG_1256: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int res74 = 3;
    int y0 = 34652;
    int lo19 = 2087;
    int h0 = 1077;
    int sv0 = 0;
    int h1 = 56500;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res74 = xn[i];
        res74 = res74 + 2;
        y0 = y0 * 3;
        lo19 = res74;
        lo19 = res74 * 20491;
        yo[i] = res74;
    }
}
int main() { test_func(); return 0; }

