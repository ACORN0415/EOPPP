// RTPG_5238: vars=12 stmts=9
int xn[32];
int yo[32];
void test_func(void) {
    int acc0 = 61038;
    int dat46 = 3;
    int v63 = 36655;
    int val15 = -37;
    int cnt89 = 49959;
    int cur99 = 6;
    int prev78 = 18005;
    int a91 = 55637;
    int dat22 = 15039;
    int res65 = 1;
    int a89 = 37;
    int prev20 = 8;
    int i;
    for (i = 0; i < 32; i++) {
        a89 = xn[i];
        a91 = a91 + 3;
        acc0 = v63 - res65;
        prev20 = cur99 + prev20;
        res65 = a91 + v63;
        v63 = acc0 + cur99;
        cur99 = cnt89 - 65;
        res65 = a89 + cnt89;
        prev20 = acc0 - dat22;
        prev20 = prev20 % v63;
        if (res65 >= 91) {
        acc0 = val15;
        }
        yo[i] = dat22;
    }
}
int main() { test_func(); return 0; }

