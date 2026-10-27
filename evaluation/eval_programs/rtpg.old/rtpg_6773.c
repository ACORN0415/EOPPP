// RTPG_6773: vars=7 stmts=12
void test_func(void) {
    int hi25 = 42;
    int val70 = 42401;
    float a91 = 97.36;
    int out5 = 6;
    int dat74 = 7;
    int out70 = 18349;
    int tmp35 = 49702;
    int i;
    for (i = 0; i < 69; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        out70 = out70 + 1;
        a91 = hi25 + tmp35;
        dat74 = a91;
        tmp35 = dat74 + hi25;
        out70 = out70 + 1;
        out5 = val70 + dat74;
        dat74 = a91 + 36;
        out5 = out5 - 2;
        val70 = val70 + 5;
        val70 = out70 + a91;
        out5 = out70 + val70;
        out70 = out70;
        }
    }
}
int main() { test_func(); return 0; }

