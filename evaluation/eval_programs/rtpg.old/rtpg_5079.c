// RTPG_5079: vars=5 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int z47 = 38;
    int lo53 = 39156;
    int y55 = -31;
    int out28 = 0;
    int a21 = 8;
    int h0 = 22;
    int sv0 = 0;
    int h1 = 13;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        out28 = xn[i];
        a21 = out28 * 1854;
        z47 = lo53 * 53128;
        lo53 = lo53 - 3;
        yo[i] = lo53;
    }
}
int main() { test_func(); return 0; }

