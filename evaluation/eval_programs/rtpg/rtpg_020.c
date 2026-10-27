// RTPG_20: vars=4 stmts=8
int idx_arr[16];
void test_func(void) {
    int out91 = 5;
    int cnt92 = 36;
    int acc31 = 9035;
    int cnt28 = 4;
    int *ptr = &cnt28;
    int i;
    for (i = 0; i < 77; i++) {
        out91 = xn[idx_arr[i]];
        acc31 = acc31 - 5;
        cnt92 = acc31 | cnt28;
        cnt92 = out91 - 0;
        out91 = acc31 + out91;
        cnt92 = cnt28 + out91;
        out91 = cnt92 - acc31;
        out91 = out91 + 5;
        out91 = cnt28 & out91;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

