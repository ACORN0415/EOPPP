// RTPG_6519: vars=10 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int out14 = 23;
    int c12 = 3;
    int tmp74 = 13273;
    int acc72 = 37;
    int z41 = 15999;
    int hi0 = 3022;
    int sum59 = 20;
    int tmp41 = 53;
    int y37 = 65159;
    int dat6 = 18630;
    int i;
    for (i = 0; i < 64; i++) {
        tmp41 = xn[i];
        y37 = dat6 + tmp41;
        out14 = y37 - 6;
        acc72 = tmp41 - acc72;
        tmp74 = z41;
        acc72 = z41;
        yo[i] = tmp74;
    }
}
int main() { test_func(); return 0; }

