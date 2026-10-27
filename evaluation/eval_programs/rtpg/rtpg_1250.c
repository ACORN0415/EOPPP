// RTPG_1250: vars=3 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int c66 = 6;
    int x13 = 7;
    int val58 = -24;
    int i;
    for (i = 0; i < 32; i++) {
        val58 = xn[i];
        c66 = xn[idx_arr[i]];
        val58 = val58 + 3;
        c66 = val58 - c66;
        c66 = c66 - c66;
        val58 = val58 + 2;
        yo[i] = c66;
    }
}
int main() { test_func(); return 0; }

