// RTPG_4705: vars=5 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int out92 = 13;
    int b5 = 9;
    int sum21 = 13729;
    int val6 = 57;
    int prev59 = -33;
    int i;
    for (i = 0; i < 16; i++) {
        out92 = xn[i];
        out92 = xn[idx_arr[i]];
        sum21 = b5 - sum21;
        val6 = sum21 & val6;
        sum21 = prev59 ^ sum21;
        b5 = out92 / sum21;
        yo[i] = val6;
    }
}
int main() { test_func(); return 0; }

