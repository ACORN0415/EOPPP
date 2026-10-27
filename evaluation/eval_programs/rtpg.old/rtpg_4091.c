// RTPG_4091: vars=7 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int res65 = 12905;
    int prev40 = 2;
    int val41 = 78;
    int c20 = 56;
    int a27 = -33;
    int val84 = -28;
    int cur78 = 8;
    int i;
    for (i = 0; i < 32; i++) {
        a27 = xn[i];
        val84 = xn[idx_arr[i]];
        val84 = res65 - 3;
        c20 = c20 + 3;
        prev40 = c20 + res65;
        res65 = res65 + 2;
        yo[i] = cur78;
    }
}
int main() { test_func(); return 0; }

