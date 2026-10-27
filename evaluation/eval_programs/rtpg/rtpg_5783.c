// RTPG_5783: vars=9 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int hi79 = 64;
    int a68 = 64;
    int a13 = 9;
    int y50 = -19;
    int dat78 = 16031;
    int v38 = 2;
    int lo44 = 21672;
    int tmp48 = 93;
    int b26 = 30327;
    int h0 = -42;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        tmp48 = xn[i];
        a68 = hi79 - a13;
        a13 = a13 - 4;
        tmp48 = y50 + a68;
        hi79 = v38 * 1;
        v38 = y50 * 10;
        y50 = b26 - 3;
        a68 = a68 + 5;
        lo44 = a13 - y50;
        a68 = a13 - a68;
        y50 = v38 + v38;
        lo44 = lo44 + 3;
        yo[i] = y50;
    }
}
int main() { test_func(); return 0; }

