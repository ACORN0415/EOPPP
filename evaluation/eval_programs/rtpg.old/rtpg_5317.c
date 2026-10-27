// RTPG_5317: vars=5 stmts=5
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int cnt96 = -42;
    int a51 = -38;
    int cur92 = 24;
    int c65 = 83;
    int tmp41 = 6;
    int i;
    for (i = 0; i < 64; i++) {
        tmp41 = xn[i];
        tmp41 = xn[idx_arr[i]];
        a51 = tmp41 + 34427;
        c65 = a51 - tmp41;
        cur92 = cur92 + tmp41;
        cnt96 = a51 - cur92;
        cnt96 = cur92 + cnt96;
        if (cur92 > 48) {
        tmp41 = tmp41 - 1;
        }
        yo[i] = cur92;
    }
}
int main() { test_func(); return 0; }

