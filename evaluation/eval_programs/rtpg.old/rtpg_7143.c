// RTPG_7143: vars=9 stmts=3
int idx_arr[64];
void test_func(void) {
    int b68 = 38570;
    int x20 = 11;
    int res76 = 9330;
    int y54 = 52;
    int acc91 = 37812;
    int sum48 = -32;
    int res28 = 25;
    int sum77 = 50799;
    int hi62 = 43266;
    int i;
    for (i = 0; i < 5; i++) {
        b68 = xn[idx_arr[i]];
        hi62 = b68 - acc91;
        acc91 = y54;
        y54 = acc91 - y54;
    }
}
int main() { test_func(); return 0; }

