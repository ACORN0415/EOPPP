// RTPG_3123: vars=7 stmts=2
int idx_arr[64];
void test_func(void) {
    int c14 = -6;
    int dat68 = 78;
    int lo8 = 18227;
    int cnt37 = -49;
    int dat35 = 0;
    int x35 = 8;
    int prev5 = 19;
    int i;
    for (i = 0; i < 63; i++) {
        prev5 = xn[idx_arr[i]];
        prev5 = cnt37 ^ x35;
        cnt37 = lo8 + dat35;
    }
}
int main() { test_func(); return 0; }

