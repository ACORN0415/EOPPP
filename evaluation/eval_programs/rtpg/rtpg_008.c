// RTPG_8: vars=7 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int res15 = 7;
    int c34 = 30904;
    int a91 = 29;
    int b55 = 41;
    int lo65 = -46;
    int z28 = 7;
    int sum10 = 19598;
    int i;
    for (i = 0; i < 64; i++) {
        res15 = xn[i];
        sum10 = c34;
        a91 = res15 + b55;
        z28 = z28 - 1;
        res15 = lo65 + sum10;
        z28 = z28 + 2;
        a91 = res15 - lo65;
        c34 = c34 - 2;
        z28 = lo65 - res15;
        yo[i] = lo65;
    }
}
int main() { test_func(); return 0; }

