// RTPG_5086: vars=6 stmts=5
int idx_arr[32];
void test_func(void) {
    int acc3 = 16;
    int cur22 = 32;
    int res68 = -12;
    int dat86 = 88;
    int y60 = 3;
    int v67 = 85;
    int *ptr = &v67;
    int i;
    for (i = 0; i < 66; i++) {
        dat86 = xn[idx_arr[i]];
        dat86 = dat86 + acc3;
        v67 = v67 + cur22;
        acc3 = cur22 + res68;
        cur22 = v67 + res68;
        acc3 = dat86 - cur22;
        *ptr = *ptr + 4;
    }
}
int main() { test_func(); return 0; }

