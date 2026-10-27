// RTPG_8: vars=7 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int sum10 = 7;
    int res15 = 30904;
    int a91 = 29;
    int z28 = 41;
    int lo65 = -46;
    int b55 = 7;
    int c34 = 19598;
    int i;
    for (i = 0; i < 64; i++) {
        sum10 = xn[i];
        c34 = res15;
        a91 = sum10 + z28;
        b55 = b55 - 1;
        sum10 = lo65 + c34;
        b55 = b55 + 2;
        a91 = sum10 - lo65;
        res15 = res15 - 2;
        b55 = lo65 - sum10;
        yo[i] = lo65;
    }
}
int main() { test_func(); return 0; }

