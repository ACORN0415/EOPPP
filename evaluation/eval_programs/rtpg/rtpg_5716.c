// RTPG_5716: vars=6 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int a68 = 5;
    int dat3 = 62891;
    int acc27 = 64363;
    int cnt20 = 51;
    int sum74 = 64151;
    int lo41 = 6;
    int i;
    for (i = 0; i < 64; i++) {
        cnt20 = xn[i];
        a68 = cnt20 - 1620;
        sum74 = lo41 % a68;
        dat3 = dat3 & acc27;
        acc27 = sum74 % a68;
        sum74 = dat3 + -10;
        yo[i] = acc27;
    }
}
int main() { test_func(); return 0; }

