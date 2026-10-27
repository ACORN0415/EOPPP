// RTPG_2567: vars=5 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int cur63 = 34;
    int tmp23 = 9;
    int a91 = 31415;
    int c96 = 34;
    int y45 = 0;
    int h0 = 35471;
    int sv0 = 0;
    int h1 = 92;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        y45 = xn[i];
        tmp23 = tmp23 - 5;
        c96 = a91 + y45;
        c96 = cur63 % a91;
        if (a91 < 39) {
        cur63 = a91 + c96;
        }
        yo[i] = cur63;
    }
}
int main() { test_func(); return 0; }

