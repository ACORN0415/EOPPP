// RTPG_6992: vars=4 stmts=10
int idx_arr[32];
void test_func(void) {
    int y40 = 4;
    int prev61 = 67;
    int dat68 = -32;
    int sum90 = -28;
    int i;
    for (i = 0; i < 40; i++) {
        sum90 = xn[idx_arr[i]];
        sum90 = dat68 - y40;
        y40 = prev61 / sum90;
        prev61 = sum90 % prev61;
        dat68 = y40 + prev61;
        prev61 = prev61 + 5;
        dat68 = prev61 - 38;
        dat68 = dat68 + 1;
        y40 = sum90 - 8;
        sum90 = dat68 - prev61;
        y40 = prev61 / dat68;
    }
}
int main() { test_func(); return 0; }

