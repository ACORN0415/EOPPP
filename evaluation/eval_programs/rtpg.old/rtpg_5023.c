// RTPG_5023: vars=6 stmts=5
int idx_arr[32];
void test_func(void) {
    int y60 = 16;
    int res68 = 32;
    int v67 = -12;
    int cur22 = 88;
    int acc3 = 3;
    int dat86 = 85;
    int *ptr = &dat86;
    int i;
    for (i = 0; i < 66; i++) {
        cur22 = xn[idx_arr[i]];
        cur22 = cur22 + y60;
        dat86 = dat86 + res68;
        y60 = res68 + v67;
        res68 = dat86 + v67;
        y60 = cur22 - res68;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

