// RTPG_1844: vars=4 stmts=3
int idx_arr[32];
void test_func(void) {
    int x50 = 8;
    int hi76 = 6;
    int y58 = -22;
    int v35 = 38218;
    int i;
    for (i = 0; i < 14; i++) {
        hi76 = xn[idx_arr[i]];
        y58 = x50 + hi76;
        y58 = y58 - 2;
        hi76 = hi76 - y58;
    }
}
int main() { test_func(); return 0; }

