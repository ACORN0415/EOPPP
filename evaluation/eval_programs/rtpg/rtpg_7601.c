// RTPG_7601: vars=9 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int x52 = -48;
    int b13 = 10;
    int v73 = 14354;
    int lo38 = 6;
    int res68 = -33;
    int a91 = -3;
    int acc98 = -48;
    int tmp47 = 28134;
    int acc1 = 63208;
    int i;
    for (i = 0; i < 32; i++) {
        tmp47 = xn[i];
        res68 = tmp47;
        res68 = v73 & b13;
        a91 = lo38 ^ acc1;
        b13 = res68 / v73;
        if (a91 != -43) {
        res68 = lo38 + lo38;
        }
        yo[i] = acc1;
    }
}
int main() { test_func(); return 0; }

