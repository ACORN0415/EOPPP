// RTPG_7076: vars=3 stmts=2
int idx_arr[32];
void test_func(void) {
    int cnt35 = -12;
    int hi96 = 3;
    int cur87 = 3935;
    int *ptr = &hi96;
    int i;
    for (i = 0; i < 18; i++) {
        cnt35 = xn[idx_arr[i]];
        cur87 = cnt35 ^ hi96;
        hi96 = cur87 - 53320;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

