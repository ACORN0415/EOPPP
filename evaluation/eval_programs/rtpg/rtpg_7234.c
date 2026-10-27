// RTPG_7234: vars=3 stmts=7
int idx_arr[64];
void test_func(void) {
    int a67 = 3;
    int x99 = 35150;
    int val56 = 20;
    int i;
    for (i = 0; i < 80; i++) {
        x99 = xn[idx_arr[i]];
        a67 = a67 + val56;
        val56 = val56;
        x99 = val56 - a67;
        a67 = a67;
        val56 = val56 + 2;
        val56 = x99 + val56;
        a67 = a67 - 1;
    }
}
int main() { test_func(); return 0; }

