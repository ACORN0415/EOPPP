// RTPG_3614: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int z47 = -31;
    int a11 = 64151;
    int a91 = 27921;
    int hi27 = 47672;
    int tmp62 = 13;
    int i;
    for (i = 0; i < 32; i++) {
        hi27 = xn[i];
        tmp62 = tmp62 + a11;
        a11 = a11 + 5;
        a91 = a91 + 1;
        hi27 = a11 + 32;
        yo[i] = a11;
    }
}
int main() { test_func(); return 0; }

