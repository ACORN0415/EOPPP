// RTPG_1270: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int res74 = 3;
    int lo19 = 34652;
    int y0 = 2087;
    int h0 = 1077;
    int sv0 = 0;
    int h1 = 56500;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res74 = xn[i];
        res74 = res74 + 2;
        lo19 = lo19 * 3;
        y0 = res74;
        y0 = res74 * 20491;
        yo[i] = res74;
    }
}
int main() { test_func(); return 0; }

