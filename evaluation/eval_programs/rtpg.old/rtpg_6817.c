// RTPG_6817: vars=8 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int val6 = 4;
    int dat68 = 17;
    int hi67 = 3;
    int tmp20 = 7;
    int x27 = 28;
    int sum70 = 39983;
    int val54 = 88;
    int z27 = 40;
    int i;
    for (i = 0; i < 16; i++) {
        val6 = xn[i];
        tmp20 = xn[idx_arr[i]];
        val6 = sum70 - tmp20;
        dat68 = z27 ^ tmp20;
        z27 = val6 & x27;
        tmp20 = val54 + 34140;
        if (tmp20 != 33) {
        z27 = z27 + 6;
        }
        yo[i] = val54;
    }
}
int main() { test_func(); return 0; }

