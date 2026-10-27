// RTPG_7124: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int dat96 = 5077;
    int b28 = -4;
    int b33 = 6;
    int h0 = 91;
    int sv0 = 0;
    int h1 = 62;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b28 = xn[i];
        b28 = b33 * 25550;
        dat96 = dat96 * 45;
        dat96 = b28;
        if (dat96 != -10) {
        dat96 = dat96 - 5;
        }
        yo[i] = dat96;
    }
}
int main() { test_func(); return 0; }

