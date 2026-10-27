// RTPG_3983: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int b77 = 2;
    int z41 = -44;
    int cnt14 = 82;
    int dat86 = 10;
    int c6 = 54395;
    int z17 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        dat86 = xn[i];
        z41 = c6 + 0;
        dat86 = dat86 - b77;
        c6 = b77 + cnt14;
        c6 = z41 + cnt14;
        z17 = dat86 - z41;
        yo[i] = z17;
    }
}
int main() { test_func(); return 0; }

