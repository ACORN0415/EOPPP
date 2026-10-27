// RTPG_123: vars=5 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int y48 = 33;
    int dat33 = 17;
    int acc47 = 49;
    int y3 = 56537;
    int hi0 = 42;
    int h0 = 41;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        hi0 = xn[i];
        acc47 = dat33 + 32;
        dat33 = y3 - 14;
        y48 = y3 + dat33;
        y3 = dat33 % acc47;
        y3 = y3;
        y3 = acc47 / hi0;
        y48 = y48 ^ dat33;
        yo[i] = y48;
    }
}
int main() { test_func(); return 0; }

