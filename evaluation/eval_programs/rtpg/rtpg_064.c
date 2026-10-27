// RTPG_64: vars=7 stmts=12
int idx_arr[32];
void test_func(void) {
    int z67 = -50;
    int hi25 = 48;
    int c51 = 6;
    int cur1 = 34;
    int a55 = 56;
    int res19 = 3;
    int cnt15 = 2;
    int *ptr = &hi25;
    int i;
    for (i = 0; i < 77; i++) {
        res19 = xn[idx_arr[i]];
        hi25 = res19 + c51;
        cur1 = a55 + cur1;
        c51 = a55 - res19;
        hi25 = z67 + hi25;
        hi25 = a55;
        z67 = z67 - 1053;
        cur1 = c51;
        cur1 = cnt15 - hi25;
        a55 = res19 + 99;
        res19 = res19 - 10;
        hi25 = hi25 + 2;
        z67 = cur1 + 4;
        *ptr = *ptr + 5;
    }
}
int main() { test_func(); return 0; }

