// RTPG_7600: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int y61 = 15;
    int y18 = 71;
    int z20 = 14689;
    int h0 = 16;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        y61 = xn[i];
        y18 = y18 * 24313;
        y18 = z20 ^ y61;
        y18 = y18 + y61;
        yo[i] = y61;
    }
}
int main() { test_func(); return 0; }

