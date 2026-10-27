// RTPG_4672: vars=3 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int hi41 = 49;
    int z87 = 94;
    int hi98 = 9;
    int *ptr = &z87;
    int h0 = 52153;
    int sv0 = 0;
    int h1 = 53793;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        hi98 = xn[i];
        hi41 = hi98 + hi98;
        hi98 = hi98 * 9;
        hi98 = z87 * 23329;
        hi41 = hi98 * 30595;
        hi98 = hi41 - z87;
        hi98 = z87 * -3;
        z87 = hi98 + 43715;
        z87 = z87 - 5;
        *ptr = *ptr + 4;
        if (hi98 > 78) {
        z87 = hi98 + hi41;
        }
        yo[i] = hi41;
    }
}
int main() { test_func(); return 0; }

