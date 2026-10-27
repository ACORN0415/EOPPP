// RTPG_181: vars=9 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int c14 = 9;
    int z54 = -11;
    int v53 = 21;
    int x63 = 16;
    int prev28 = 5;
    int v87 = 11;
    int hi44 = 2;
    int z60 = 9;
    int a30 = 33301;
    int *ptr = &hi44;
    int h0 = 24625;
    int sv0 = 0;
    int h1 = -35;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev28 = xn[i];
        z54 = a30 - 41151;
        c14 = x63 * 61;
        c14 = c14 - 3;
        *ptr = *ptr + 3;
        yo[i] = a30;
    }
}
int main() { test_func(); return 0; }

