// RTPG_1786: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int c71 = -17;
    float cur84 = 42.14;
    int out76 = 91;
    float hi4 = 61.61;
    int h0 = 63;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cur84 = xn[i];
        c71 = hi4 | cur84;
        cur84 = cur84;
        hi4 = cur84 * 4681;
        hi4 = hi4 - hi4;
        cur84 = hi4 - cur84;
        yo[i] = cur84;
    }
}
int main() { test_func(); return 0; }

