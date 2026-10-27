// RTPG_8955: vars=8 stmts=3
int idx_arr[64];
void test_func(void) {
    int lo56 = 4;
    int cnt74 = 2;
    int z43 = 58780;
    int x80 = 15782;
    int prev54 = 65398;
    int cur60 = 14;
    int y87 = 31709;
    int tmp96 = 3;
    int i;
    for (i = 0; i < 65; i++) {
        cur60 = xn[idx_arr[i]];
        cnt74 = prev54 + tmp96;
        prev54 = lo56 - z43;
        prev54 = cur60 + tmp96;
    }
}
int main() { test_func(); return 0; }

