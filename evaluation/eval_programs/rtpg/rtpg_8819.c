// RTPG_8819: vars=5 stmts=2
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int acc69 = -35;
    int cur5 = 17438;
    int hi16 = -45;
    int b11 = 31;
    int cnt90 = 39;
    int *ptr = &acc69;
    int i;
    for (i = 0; i < 16; i++) {
        acc69 = xn[i];
        b11 = xn[idx_arr[i]];
        b11 = cur5 & cnt90;
        b11 = b11;
        *ptr = *ptr + 1;
        if (cnt90 <= 63) {
        acc69 = hi16;
        }
        yo[i] = cnt90;
    }
}
int main() { test_func(); return 0; }

