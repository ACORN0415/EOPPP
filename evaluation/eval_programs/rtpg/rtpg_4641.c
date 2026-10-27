// RTPG_4641: vars=10 stmts=4
int idx_arr[32];
void test_func(void) {
    int a14 = 40515;
    int cur90 = 10;
    int b56 = 2;
    int res63 = -10;
    int prev32 = 26043;
    int tmp85 = 6;
    int prev30 = -24;
    int x60 = 36;
    int dat59 = 2;
    int out90 = 71;
    int *ptr = &prev30;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 67;
    int sv1 = 0;
    int h2 = -33;
    int sv2 = 0;
    int h3 = 3296;
    int sv3 = 0;
    int i;
    for (i = 0; i < 71; i++) {
        out90 = xn[idx_arr[i]];
        b56 = prev32 * 10;
        out90 = x60 | b56;
        out90 = dat59 ^ out90;
        cur90 = cur90 - 5;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

