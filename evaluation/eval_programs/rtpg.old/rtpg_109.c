// RTPG_109: vars=3 stmts=4
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int acc23 = 68;
    int cnt2 = 34;
    int x36 = 1;
    int i;
    for (i = 0; i < 32; i++) {
        acc23 = xn[i];
        acc23 = xn[idx_arr[i]];
        x36 = x36 / x36;
        x36 = x36 - 5;
        acc23 = acc23 - cnt2;
        acc23 = cnt2 / cnt2;
        yo[i] = acc23;
    }
}
int main() { test_func(); return 0; }

