// RTPG_4120: vars=7 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int val41 = 12905;
    int a27 = 2;
    int prev40 = 78;
    int cur78 = 56;
    int res65 = -33;
    int val84 = -28;
    int c20 = 8;
    int i;
    for (i = 0; i < 32; i++) {
        res65 = xn[i];
        val84 = xn[idx_arr[i]];
        val84 = val41 - 3;
        cur78 = cur78 + 3;
        a27 = cur78 + val41;
        val41 = val41 + 2;
        yo[i] = c20;
    }
}
int main() { test_func(); return 0; }

