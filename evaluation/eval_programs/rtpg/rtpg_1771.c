// RTPG_1771: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int y3 = 30;
    int b98 = 65;
    int sum28 = 2167;
    int acc20 = 7;
    int lo92 = -33;
    int h0 = 8318;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        acc20 = xn[i];
        sum28 = acc20 - sum28;
        b98 = b98 - 5;
        acc20 = lo92;
        acc20 = acc20 * 10;
        lo92 = lo92 + 3;
        yo[i] = lo92;
    }
}
int main() { test_func(); return 0; }

