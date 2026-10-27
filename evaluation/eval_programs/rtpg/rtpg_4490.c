// RTPG_4490: vars=5 stmts=12
int idx_arr[16];
void test_func(void) {
    int v10 = 27;
    int prev10 = 64217;
    int val3 = -41;
    int sum30 = 14;
    int dat4 = 31588;
    int i;
    for (i = 0; i < 100; i++) {
        prev10 = xn[idx_arr[i]];
        v10 = prev10 + 1;
        sum30 = v10 - v10;
        val3 = sum30 + 31111;
        prev10 = prev10;
        val3 = v10 - prev10;
        v10 = v10 + 5;
        prev10 = v10;
        prev10 = dat4 - val3;
        dat4 = v10 + 97;
        sum30 = sum30 - 4;
        prev10 = dat4 + sum30;
        val3 = val3 - 5;
    }
}
int main() { test_func(); return 0; }

