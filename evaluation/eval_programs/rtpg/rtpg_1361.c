// RTPG_1361: vars=4 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int acc15 = 6;
    int sum0 = 8;
    int a91 = 5;
    int b47 = 62;
    int i;
    for (i = 0; i < 64; i++) {
        acc15 = xn[i];
        acc15 = acc15 - 4;
        sum0 = sum0 - 1;
        b47 = b47 + 4;
        a91 = acc15 + acc15;
        if (a91 <= -15) {
        b47 = acc15;
        }
        yo[i] = sum0;
    }
}
int main() { test_func(); return 0; }

