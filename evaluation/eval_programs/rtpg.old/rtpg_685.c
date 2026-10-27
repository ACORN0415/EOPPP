// RTPG_685: vars=5 stmts=7
int idx_arr[32];
void test_func(void) {
    int x86 = -13;
    int x3 = 5;
    int v5 = 32;
    int lo68 = 16;
    int z31 = 22248;
    int i;
    for (i = 0; i < 75; i++) {
        z31 = xn[idx_arr[i]];
        v5 = v5 - 1;
        z31 = v5 - x3;
        v5 = lo68 - x86;
        x86 = z31;
        lo68 = x86 - 44744;
        z31 = lo68 + x3;
        v5 = v5 + 2;
        if (z31 != -16) {
        z31 = x3;
        }
    }
}
int main() { test_func(); return 0; }

