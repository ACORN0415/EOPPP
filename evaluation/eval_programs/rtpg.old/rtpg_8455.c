// RTPG_8455: vars=7 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int tmp28 = -30;
    int x77 = 0;
    int y92 = 32;
    int x39 = -28;
    int tmp44 = 12144;
    int tmp84 = 10;
    int y14 = -16;
    int h0 = 36;
    int sv0 = 0;
    int h1 = -12;
    int sv1 = 0;
    int h2 = 1;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        y92 = xn[i];
        tmp44 = tmp44 - 1;
        x77 = tmp28 - x77;
        x39 = tmp44 * 30;
        y14 = x39 * 20;
        yo[i] = y92;
    }
}
int main() { test_func(); return 0; }

