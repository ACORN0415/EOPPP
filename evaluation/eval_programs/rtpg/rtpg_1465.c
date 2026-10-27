// RTPG_1465: vars=5 stmts=6
int idx_arr[32];
void test_func(void) {
    int val20 = 4;
    int cnt14 = 0;
    int c70 = 33;
    int sum72 = 0;
    int val6 = 17;
    int h0 = 11;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 26; i++) {
        c70 = xn[idx_arr[i]];
        sum72 = sum72 - 4;
        val6 = cnt14 * 7;
        c70 = sum72 & val20;
        cnt14 = c70 + cnt14;
        cnt14 = sum72 * -24;
        val20 = sum72 | val20;
    }
}
int main() { test_func(); return 0; }

