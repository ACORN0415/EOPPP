// RTPG_3285: vars=3 stmts=4
int idx_arr[64];
void test_func(void) {
    int res77 = 22;
    int v50 = 54;
    int out45 = 15;
    int i;
    for (i = 0; i < 50; i++) {
        res77 = xn[idx_arr[i]];
        res77 = v50 - 66;
        v50 = v50 + 4;
        v50 = out45 + 63;
        res77 = res77 - 5;
    }
}
int main() { test_func(); return 0; }

