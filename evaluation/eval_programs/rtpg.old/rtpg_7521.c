// RTPG_7521: vars=9 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int res68 = -48;
    int a91 = 10;
    int x52 = 14354;
    int tmp47 = 6;
    int v73 = -33;
    int acc98 = -3;
    int lo38 = -48;
    int acc1 = 28134;
    int b13 = 63208;
    int i;
    for (i = 0; i < 32; i++) {
        acc1 = xn[i];
        v73 = acc1;
        v73 = x52 & a91;
        acc98 = tmp47 ^ acc1;
        a91 = v73 / x52;
        if (acc98 != -43) {
        v73 = tmp47 + tmp47;
        }
        yo[i] = b13;
    }
}
int main() { test_func(); return 0; }

