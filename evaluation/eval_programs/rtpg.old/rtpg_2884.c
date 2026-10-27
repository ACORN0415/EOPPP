// RTPG_2884: vars=3 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int b67 = 7;
    int z22 = 28148;
    int acc89 = 64;
    int h0 = 56932;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        acc89 = xn[i];
        z22 = acc89 + 32;
        z22 = b67 * 3;
        b67 = b67 + 1;
        b67 = b67 - 5;
        if (z22 != -48) {
        b67 = z22 - 27;
        }
        yo[i] = z22;
    }
}
int main() { test_func(); return 0; }

