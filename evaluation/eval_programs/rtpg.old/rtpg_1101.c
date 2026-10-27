// RTPG_1101: vars=6 stmts=9
int xn[16];
int yo[16];
void test_func(void) {
    int hi16 = 26;
    int c11 = 26;
    int out25 = 8;
    int prev91 = 66;
    int z96 = 31344;
    int out19 = 42506;
    int h0 = 16;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev91 = xn[i];
        out19 = hi16 + out25;
        c11 = z96 + 20100;
        z96 = prev91 * 9097;
        out25 = c11 * 13644;
        out25 = z96;
        out19 = hi16;
        z96 = z96 + 2;
        out19 = z96 - 4;
        hi16 = z96 + out19;
        yo[i] = prev91;
    }
}
int main() { test_func(); return 0; }

