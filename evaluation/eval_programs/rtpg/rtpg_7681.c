// RTPG_7681: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int z20 = 15;
    int y61 = 71;
    int y18 = 14689;
    int h0 = 16;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        z20 = xn[i];
        y61 = y61 * 24313;
        y61 = y18 ^ z20;
        y61 = y61 + z20;
        yo[i] = z20;
    }
}
int main() { test_func(); return 0; }

