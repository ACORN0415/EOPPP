// RTPG_3276: vars=4 stmts=3
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int cnt54 = 40522;
    int prev5 = 25;
    int z30 = 2;
    int b66 = 36738;
    int i;
    for (i = 0; i < 64; i++) {
        b66 = xn[i];
        cnt54 = xn[idx_arr[i]];
        b66 = b66;
        z30 = z30 - 3;
        b66 = b66 - 54;
        if (z30 <= -9) {
        z30 = z30 + 3;
        }
        yo[i] = b66;
    }
}
int main() { test_func(); return 0; }

