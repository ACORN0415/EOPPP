// RTPG_360: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int prev31 = 66;
    int acc92 = 81;
    int b63 = 17;
    int h0 = 26;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        acc92 = xn[i];
        prev31 = b63;
        b63 = prev31;
        b63 = acc92 * 36;
        b63 = prev31 + acc92;
        yo[i] = b63;
    }
}
int main() { test_func(); return 0; }

