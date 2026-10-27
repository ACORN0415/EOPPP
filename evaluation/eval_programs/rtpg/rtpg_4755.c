// RTPG_4755: vars=5 stmts=4
int idx_arr[16];
void test_func(void) {
    int cur70 = 10;
    int lo90 = 8;
    int res7 = 8;
    int acc11 = 8;
    int c3 = 11500;
    int i;
    for (i = 0; i < 90; i++) {
        cur70 = xn[idx_arr[i]];
        cur70 = cur70 % lo90;
        cur70 = res7 + lo90;
        res7 = res7;
        lo90 = cur70 - lo90;
    }
}
int main() { test_func(); return 0; }

