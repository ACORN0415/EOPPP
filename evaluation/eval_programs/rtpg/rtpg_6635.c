// RTPG_6635: vars=4 stmts=7
int idx_arr[64];
void test_func(void) {
    int v67 = 35;
    int c38 = 26;
    int c43 = 50;
    int hi56 = 47;
    int i;
    for (i = 0; i < 64; i++) {
        v67 = xn[idx_arr[i]];
        c43 = hi56;
        hi56 = hi56 + v67;
        hi56 = c43;
        c38 = c38 + 1;
        c43 = c43 - 1;
        c38 = v67;
        hi56 = v67 - c38;
    }
}
int main() { test_func(); return 0; }

