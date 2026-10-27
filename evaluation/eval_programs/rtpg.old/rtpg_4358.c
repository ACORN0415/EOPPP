// RTPG_4358: vars=10 stmts=2
int idx_arr[16];
void test_func(void) {
    int tmp28 = 78;
    int res71 = 4;
    int x15 = 31154;
    int dat84 = 7;
    int sum99 = 10;
    int c17 = 69;
    int acc89 = 1;
    int a84 = -31;
    int acc45 = 30508;
    int v89 = -24;
    int h0 = 4;
    int sv0 = 0;
    int h1 = -42;
    int sv1 = 0;
    int h2 = 62;
    int sv2 = 0;
    int h3 = 3;
    int sv3 = 0;
    int i;
    for (i = 0; i < 36; i++) {
        acc45 = xn[idx_arr[i]];
        v89 = v89 + 1;
        res71 = acc45 - res71;
    }
}
int main() { test_func(); return 0; }

