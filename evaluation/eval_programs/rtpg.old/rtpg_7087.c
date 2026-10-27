// RTPG_7087: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int a92 = 20863;
    int dat8 = 22;
    int hi58 = 77;
    int res78 = 77;
    int out55 = 7;
    int y29 = 56;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 56708;
    int sv1 = 0;
    int h2 = 2;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat8 = xn[i];
        dat8 = dat8 - 2;
        a92 = dat8 - 27941;
        hi58 = a92 * 24;
        dat8 = dat8 + 3;
        dat8 = dat8 * 13;
        yo[i] = res78;
    }
}
int main() { test_func(); return 0; }

