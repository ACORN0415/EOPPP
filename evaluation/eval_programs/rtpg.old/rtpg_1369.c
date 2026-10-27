// RTPG_1369: vars=4 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int b47 = 6;
    int sum0 = 8;
    int a91 = 5;
    int acc15 = 62;
    int i;
    for (i = 0; i < 64; i++) {
        b47 = xn[i];
        b47 = b47 - 4;
        sum0 = sum0 - 1;
        acc15 = acc15 + 4;
        a91 = b47 + b47;
        if (a91 <= -15) {
        acc15 = b47;
        }
        yo[i] = sum0;
    }
}
int main() { test_func(); return 0; }

