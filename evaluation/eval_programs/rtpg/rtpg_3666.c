// RTPG_3666: vars=9 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int cnt29 = 9;
    int x13 = 50;
    int tmp23 = 15654;
    int cur95 = 91;
    int z14 = -49;
    int acc11 = -40;
    int acc8 = 24;
    int v89 = 86;
    int prev66 = 0;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        v89 = xn[i];
        acc8 = prev66 - acc8;
        cnt29 = prev66 + cnt29;
        prev66 = v89 * 42;
        cnt29 = cnt29 * 30;
        v89 = prev66 * 7;
        yo[i] = v89;
    }
}
int main() { test_func(); return 0; }

