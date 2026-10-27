// RTPG_6893: vars=8 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int sum70 = 4;
    int hi67 = 17;
    int dat68 = 3;
    int tmp20 = 7;
    int val6 = 28;
    int x27 = 39983;
    int val54 = 88;
    int z27 = 40;
    int i;
    for (i = 0; i < 16; i++) {
        sum70 = xn[i];
        tmp20 = xn[idx_arr[i]];
        sum70 = x27 - tmp20;
        hi67 = z27 ^ hi67;
        z27 = sum70 & tmp20;
        tmp20 = val54 + 34140;
        if (tmp20 != 33) {
        z27 = z27 + 6;
        }
        yo[i] = val54;
    }
}
int main() { test_func(); return 0; }

