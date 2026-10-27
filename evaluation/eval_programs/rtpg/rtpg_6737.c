// RTPG_6737: vars=10 stmts=9
int idx_arr[16];
void test_func(void) {
    int a20 = 37613;
    int cur93 = -26;
    int val93 = 19378;
    int z51 = 1;
    int y24 = 47;
    int x27 = 5;
    int lo29 = 27;
    int tmp48 = 3;
    int prev66 = 11020;
    int tmp53 = 36;
    int i;
    for (i = 0; i < 45; i++) {
        a20 = xn[idx_arr[i]];
        tmp48 = tmp48 ^ y24;
        a20 = a20 % x27;
        val93 = cur93 - tmp53;
        val93 = val93 + 1;
        tmp53 = x27;
        lo29 = lo29 - 2;
        val93 = cur93 % z51;
        y24 = tmp53 & prev66;
        x27 = val93 - 37112;
    }
}
int main() { test_func(); return 0; }

