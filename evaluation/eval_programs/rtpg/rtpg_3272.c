// RTPG_3272: vars=3 stmts=5
int idx_arr[64];
void test_func(void) {
    int res71 = 1;
    int c52 = 5;
    int out86 = 13081;
    int *ptr = &out86;
    int i;
    for (i = 0; i < 85; i++) {
        res71 = xn[idx_arr[i]];
        out86 = out86;
        res71 = res71 - 4;
        out86 = out86 + out86;
        res71 = c52 + 41;
        res71 = res71 + 2;
        *ptr = *ptr + 4;
        if (out86 >= -31) {
        c52 = out86 - 27934;
        }
    }
}
int main() { test_func(); return 0; }

