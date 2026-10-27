// RTPG_3216: vars=9 stmts=3
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int val30 = 3;
    int z2 = 2;
    int lo55 = 3;
    int res28 = 4;
    int x96 = 72;
    int z45 = 83;
    int x24 = 1;
    int c62 = 2398;
    int res33 = 28;
    int i;
    for (i = 0; i < 32; i++) {
        res33 = xn[i];
        res33 = xn[idx_arr[i]];
        c62 = c62 - 1;
        z45 = val30;
        z2 = res28;
        yo[i] = z2;
    }
}
int main() { test_func(); return 0; }

