// RTPG_1264: vars=3 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int x13 = 6;
    int val58 = 7;
    int c66 = -24;
    int i;
    for (i = 0; i < 32; i++) {
        c66 = xn[i];
        x13 = xn[idx_arr[i]];
        c66 = c66 + 3;
        x13 = c66 - x13;
        x13 = x13 - x13;
        c66 = c66 + 2;
        yo[i] = x13;
    }
}
int main() { test_func(); return 0; }

