// RTPG_6722: vars=3 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int lo95 = 58271;
    int cnt41 = 6;
    int tmp18 = 10;
    int h0 = 20;
    int sv0 = 0;
    int h1 = 25;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cnt41 = xn[i];
        tmp18 = cnt41 * 2;
        tmp18 = tmp18 + cnt41;
        tmp18 = lo95 * 50;
        cnt41 = lo95 * 6;
        tmp18 = cnt41 * 11;
        lo95 = tmp18 - -8;
        tmp18 = cnt41 * -16;
        yo[i] = tmp18;
    }
}
int main() { test_func(); return 0; }

