// RTPG_8627: vars=3 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int prev77 = 2;
    int acc55 = 1;
    int y58 = -4;
    int i;
    for (i = 0; i < 32; i++) {
        acc55 = xn[i];
        acc55 = acc55;
        y58 = acc55 - acc55;
        if (y58 < 21) {
        y58 = y58;
        }
        yo[i] = y58;
    }
}
int main() { test_func(); return 0; }

