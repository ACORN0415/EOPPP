// RTPG_4911: vars=7 stmts=7
int idx_arr[16];
void test_func(void) {
    int x74 = 26557;
    int out65 = 22;
    int out57 = 58779;
    int val5 = 100;
    int v7 = 33396;
    int c31 = 12;
    int lo15 = 2;
    int i;
    for (i = 0; i < 12; i++) {
        c31 = xn[idx_arr[i]];
        out57 = out65;
        out65 = c31 + out65;
        out65 = out65 - x74;
        c31 = v7 + c31;
        lo15 = lo15 + 5;
        lo15 = lo15 - 4;
        lo15 = lo15 - 2;
    }
}
int main() { test_func(); return 0; }

