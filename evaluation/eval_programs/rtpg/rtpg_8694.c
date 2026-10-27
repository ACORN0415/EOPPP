// RTPG_8694: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int val81 = 30439;
    int hi61 = 5;
    int acc24 = 19620;
    int res92 = 17179;
    int h0 = 9;
    int sv0 = 0;
    int h1 = 65281;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        hi61 = xn[i];
        hi61 = hi61 - acc24;
        acc24 = res92 * 20;
        res92 = res92 - hi61;
        hi61 = acc24 - 10767;
        hi61 = res92;
        if (res92 == 17) {
        res92 = res92 - 4;
        }
        yo[i] = hi61;
    }
}
int main() { test_func(); return 0; }

