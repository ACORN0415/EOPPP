// RTPG_6438: vars=6 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int y32 = 41;
    int prev31 = 75;
    int c55 = 2;
    int z93 = 13;
    int b86 = 48;
    int dat45 = 21;
    int h0 = 19;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int h2 = 50;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        z93 = xn[i];
        y32 = y32 - 3;
        b86 = b86 + 2;
        b86 = y32;
        yo[i] = c55;
    }
}
int main() { test_func(); return 0; }

