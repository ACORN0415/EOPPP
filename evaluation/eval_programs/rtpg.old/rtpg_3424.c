// RTPG_3424: vars=7 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int hi1 = 8;
    int c80 = 56193;
    int x81 = 15668;
    int hi67 = 24858;
    int a57 = 7;
    int x99 = 19;
    int lo35 = 5;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 14623;
    int sv1 = 0;
    int h2 = 3;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        hi67 = xn[i];
        lo35 = x99 & x81;
        hi1 = hi67 * 1;
        yo[i] = lo35;
    }
}
int main() { test_func(); return 0; }

