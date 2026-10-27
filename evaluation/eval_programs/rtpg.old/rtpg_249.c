// RTPG_249: vars=7 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int y90 = 41;
    int c10 = 28;
    int acc76 = 21020;
    int z5 = -39;
    int z53 = 30;
    int c22 = 51;
    int prev83 = 6155;
    int h0 = 11;
    int sv0 = 0;
    int h1 = 19;
    int sv1 = 0;
    int h2 = 0;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        c22 = xn[i];
        c22 = acc76 - 58;
        z53 = y90 + z5;
        acc76 = c22 + y90;
        yo[i] = acc76;
    }
}
int main() { test_func(); return 0; }

