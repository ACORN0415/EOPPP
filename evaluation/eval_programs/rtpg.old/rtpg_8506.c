// RTPG_8506: vars=6 stmts=7
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int tmp40 = -33;
    int x36 = 50627;
    int z87 = 5188;
    int val26 = 0;
    int y7 = 9;
    int val36 = 35390;
    int i;
    for (i = 0; i < 32; i++) {
        val26 = xn[i];
        val26 = xn[idx_arr[i]];
        y7 = y7 - x36;
        tmp40 = x36 + val26;
        z87 = val36 - x36;
        tmp40 = tmp40 + z87;
        tmp40 = tmp40 - val26;
        tmp40 = y7 + z87;
        x36 = x36 + 5;
        yo[i] = z87;
    }
done:
    z87 = 0;
}
int main() { test_func(); return 0; }

