// RTPG_6473: vars=7 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int out82 = 6237;
    int a69 = 1;
    int acc16 = 4;
    int cur16 = -24;
    int cur91 = 28;
    int x5 = 45;
    int lo19 = 63;
    int h0 = 78;
    int sv0 = 0;
    int h1 = 35389;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        acc16 = xn[i];
        lo19 = acc16 - lo19;
        acc16 = acc16 + 2;
        lo19 = lo19 - out82;
        acc16 = x5 | cur16;
        a69 = x5 + a69;
        cur16 = cur16 * 2;
        x5 = acc16 + x5;
        a69 = a69 - 5;
        if (acc16 < 65) {
        out82 = lo19 - x5;
        }
        yo[i] = cur91;
    }
}
int main() { test_func(); return 0; }

