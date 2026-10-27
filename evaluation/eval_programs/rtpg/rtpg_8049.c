// RTPG_8049: vars=4 stmts=11
int idx_arr[16];
void test_func(void) {
    int dat38 = 13497;
    int cur62 = 10;
    int res8 = 27;
    int dat37 = 10;
    int *ptr = &cur62;
    int i;
    for (i = 0; i < 97; i++) {
        dat37 = xn[idx_arr[i]];
        dat37 = dat37 + cur62;
        res8 = dat37 + dat37;
        dat37 = dat37 + 3;
        dat37 = dat37 + 20;
        dat38 = dat38 - 1;
        cur62 = cur62 + 3;
        dat37 = dat37 + 8;
        dat37 = res8 - 7;
        cur62 = res8 - 48;
        cur62 = cur62 - 9;
        dat37 = dat37;
        *ptr = *ptr + 2;
    }
}
int main() { test_func(); return 0; }

