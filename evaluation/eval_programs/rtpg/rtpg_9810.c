// RTPG_9810: vars=4 stmts=7
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int hi87 = 14;
    int tmp40 = -9;
    int tmp77 = 33887;
    int res85 = 33365;
    int h0 = 21642;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        res85 = xn[i];
        tmp40 = xn[idx_arr[i]];
        hi87 = tmp77 * 27;
        res85 = tmp77 - hi87;
        hi87 = tmp40;
        tmp40 = tmp77;
        res85 = tmp40 - tmp77;
        tmp40 = tmp77;
        hi87 = res85 * 31;
        yo[i] = tmp77;
    }
}
int main() { test_func(); return 0; }

