// RTPG_3588: vars=7 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int val40 = 79;
    int x76 = 20120;
    int a28 = 65;
    int c4 = 8;
    int z88 = 11;
    int lo97 = 42;
    int b75 = 19074;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        a28 = xn[i];
        val40 = c4 + a28;
        val40 = val40 - 4;
        lo97 = a28 * -36;
        if (lo97 > -33) {
        z88 = b75 - lo97;
        }
        yo[i] = a28;
    }
}
int main() { test_func(); return 0; }

