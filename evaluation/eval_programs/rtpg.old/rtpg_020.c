// RTPG_20: vars=4 stmts=8
int idx_arr[16];
void test_func(void) {
    int cnt92 = 5;
    int out91 = 36;
    int acc31 = 9035;
    int cnt28 = 4;
    int *ptr = &cnt28;
    int i;
    for (i = 0; i < 77; i++) {
        cnt92 = xn[idx_arr[i]];
        acc31 = acc31 - 5;
        out91 = acc31 % cnt28;
        acc31 = cnt28 % cnt92;
        cnt92 = cnt92;
        cnt28 = cnt92;
        cnt92 = out91 | cnt28;
        out91 = cnt92;
        cnt28 = out91 ^ cnt28;
        *ptr = *ptr + 1;
    }
done:
    out91 = 0;
}
int main() { test_func(); return 0; }

