// RTPG_6866: vars=8 stmts=9
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int cnt61 = 2;
    float cur81 = 7.78;
    int acc66 = 19507;
    int hi84 = 18;
    int c35 = 64720;
    float acc76 = 98.75;
    int z89 = 5;
    int res44 = 5;
    int i;
    for (i = 0; i < 64; i++) {
        c35 = xn[i];
        cur81 = xn[idx_arr[i]];
        acc66 = cnt61 + c35;
        hi84 = cur81 + z89;
        cnt61 = acc76;
        z89 = hi84 - 56986;
        z89 = res44 + c35;
        hi84 = cur81 + cnt61;
        res44 = res44 - 2;
        hi84 = acc66;
        cnt61 = cnt61 - 3;
        yo[i] = cnt61;
    }
}
int main() { test_func(); return 0; }

