// RTPG_3021: vars=7 stmts=4
int idx_arr[16];
void test_func(void) {
    int lo51 = 9;
    int acc66 = 6;
    int c35 = 65;
    int acc76 = 68;
    int v33 = 21982;
    int out28 = 7;
    int cnt14 = 2;
    int i;
    for (i = 0; i < 42; i++) {
        out28 = xn[idx_arr[i]];
        v33 = acc66 % out28;
        acc66 = acc66 - 1;
        out28 = acc76;
        lo51 = out28 - c35;
        if (lo51 == 6) {
        c35 = c35 - 1;
        }
    }
}
int main() { test_func(); return 0; }

