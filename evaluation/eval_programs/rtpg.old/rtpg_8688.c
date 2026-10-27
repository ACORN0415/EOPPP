// RTPG_8688: vars=5 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int cur18 = 63561;
    int cur84 = 3;
    int dat81 = -28;
    int y18 = 20;
    int acc3 = 50;
    int i;
    for (i = 0; i < 64; i++) {
        acc3 = xn[i];
        cur84 = y18 + 11702;
        cur84 = cur84 - 4;
        y18 = acc3 + cur84;
        dat81 = cur84 - cur18;
        y18 = y18 + 2;
        acc3 = acc3 + 3;
        y18 = acc3;
        yo[i] = cur18;
    }
}
int main() { test_func(); return 0; }

