// RTPG_206: vars=3 stmts=2
int idx_arr[16];
void test_func(void) {
    int acc88 = 10;
    int c77 = 53;
    int tmp47 = 27;
    int i;
    for (i = 0; i < 35; i++) {
        c77 = xn[idx_arr[i]];
        tmp47 = tmp47 + 1;
        tmp47 = c77;
    }
}
int main() { test_func(); return 0; }

