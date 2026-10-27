// RTPG_7074: vars=3 stmts=8
int idx_arr[32];
void test_func(void) {
    int x40 = 3;
    int cur28 = 3;
    int tmp97 = 37;
    int *ptr = &cur28;
    int i;
    for (i = 0; i < 59; i++) {
        tmp97 = xn[idx_arr[i]];
        cur28 = cur28 + cur28;
        tmp97 = cur28;
        tmp97 = cur28;
        cur28 = x40 + tmp97;
        cur28 = x40 - tmp97;
        tmp97 = x40 + cur28;
        cur28 = tmp97;
        tmp97 = x40;
        *ptr = *ptr + 2;
        if (tmp97 <= 27) {
        x40 = tmp97 + x40;
        }
    }
}
int main() { test_func(); return 0; }

