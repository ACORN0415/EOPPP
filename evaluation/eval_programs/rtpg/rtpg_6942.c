// RTPG_6942: vars=8 stmts=9
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int cur81 = 2;
    float cnt61 = 7.78;
    int acc66 = 19507;
    int acc76 = 18;
    int res44 = 64720;
    float hi84 = 98.75;
    int z89 = 5;
    int c35 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        res44 = xn[i];
        cnt61 = xn[idx_arr[i]];
        acc66 = cur81 + res44;
        acc76 = cnt61 + z89;
        cur81 = hi84;
        z89 = acc76 - 56986;
        z89 = c35 + res44;
        acc76 = cnt61 + cur81;
        c35 = c35 - 2;
        acc76 = acc66;
        cur81 = cur81 - 3;
        yo[i] = cur81;
    }
}
int main() { test_func(); return 0; }

