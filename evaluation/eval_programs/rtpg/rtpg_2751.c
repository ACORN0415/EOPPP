// RTPG_2751: vars=5 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int lo4 = 7;
    int sum87 = -25;
    int lo14 = 1;
    int res90 = 9;
    int acc70 = -11;
    int i;
    for (i = 0; i < 16; i++) {
        acc70 = xn[i];
        lo14 = sum87 - lo14;
        lo4 = sum87 - sum87;
        lo4 = acc70 + sum87;
        acc70 = lo14;
        res90 = acc70 - res90;
        lo4 = lo14;
        yo[i] = sum87;
    }
}
int main() { test_func(); return 0; }

