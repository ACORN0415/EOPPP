// RTPG_8564: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int val81 = 30439;
    int res92 = 5;
    int hi61 = 19620;
    int acc24 = 17179;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 65281;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res92 = xn[i];
        res92 = res92 - hi61;
        hi61 = acc24 * 20;
        acc24 = acc24 - res92;
        res92 = hi61 - 10767;
        res92 = acc24;
        if (acc24 == 17) {
        acc24 = acc24 - 4;
        }
        yo[i] = res92;
    }
}
int main() { test_func(); return 0; }

