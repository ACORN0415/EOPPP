// RTPG_8374: vars=10 stmts=3
int idx_arr[32];
void test_func(void) {
    int lo68 = 35290;
    int res72 = 78;
    int val59 = 27;
    int prev97 = 6;
    int tmp37 = 22;
    int z68 = 36;
    int x77 = 9;
    int tmp39 = 21859;
    int hi23 = 26;
    int b26 = 30358;
    int *ptr = &val59;
    int i;
    for (i = 0; i < 94; i++) {
        tmp39 = xn[idx_arr[i]];
        prev97 = tmp39 - tmp37;
        x77 = x77 - 1;
        tmp37 = val59 + b26;
        *ptr = *ptr + 3;
    }
}
int main() { test_func(); return 0; }

