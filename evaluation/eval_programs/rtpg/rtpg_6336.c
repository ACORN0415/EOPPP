// RTPG_6336: vars=3 stmts=7
void test_func(void) {
    int a8 = 63999;
    int acc55 = 61;
    int a91 = 58597;
    int i;
    for (i = 0; i < 75; i++) {
        a91 = a91;
        a8 = acc55 - a8;
        a8 = a8 + a91;
        acc55 = acc55 - a8;
        a8 = acc55 + a91;
        a8 = acc55;
        a8 = a8 + 4;
        if (acc55 > -50) goto done;
        if (a91 < 42) {
        a8 = acc55;
        }
    }
done:
    a91 = 0;
}
int main() { test_func(); return 0; }

