// RTPG_8853: vars=4 stmts=8
int idx_arr[32];
void test_func(void) {
    int c43 = 79;
    int x6 = 37628;
    int val27 = 29555;
    int cur51 = 6;
    int h0 = 11527;
    int sv0 = 0;
    int h1 = 26;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        c43 = xn[idx_arr[i]];
        x6 = x6 * 13540;
        x6 = val27 + 59;
        x6 = c43 - x6;
        x6 = cur51 ^ c43;
        c43 = c43 + 1;
        x6 = cur51 + x6;
        cur51 = x6;
        cur51 = cur51 + c43;
    }
}
int main() { test_func(); return 0; }

