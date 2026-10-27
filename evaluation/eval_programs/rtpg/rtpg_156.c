// RTPG_156: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int y17 = 64;
    int out55 = 4;
    int y6 = 96;
    int c50 = 5;
    int h0 = 16;
    int sv0 = 0;
    int h1 = 68;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        y6 = xn[i];
        c50 = out55 - y17;
        c50 = c50 * 53399;
        c50 = y17 * 6;
        if (c50 < 25) {
        c50 = c50 - 0;
        }
        yo[i] = y6;
    }
}
int main() { test_func(); return 0; }

