// RTPG_1588: vars=7 stmts=2
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int x25 = 1;
    int dat42 = 53673;
    int dat7 = 62282;
    int res46 = 80;
    int res12 = 55405;
    int x6 = 53227;
    int res30 = 39;
    int *ptr = &res12;
    int i;
    for (i = 0; i < 16; i++) {
        res30 = xn[i];
        res12 = xn[idx_arr[i]];
        dat7 = res12 - res46;
        res12 = res46 - x25;
        *ptr = *ptr + 5;
        yo[i] = res30;
    }
}
int main() { test_func(); return 0; }

