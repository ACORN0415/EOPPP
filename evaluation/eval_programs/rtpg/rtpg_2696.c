// RTPG_2696: vars=9 stmts=6
int idx_arr[64];
void test_func(void) {
    int dat67 = 49;
    int tmp12 = 39168;
    int acc27 = 33;
    int v14 = 1;
    int v18 = 4;
    int x55 = 20;
    int out42 = 20;
    int z49 = -5;
    int val95 = 0;
    int *ptr = &out42;
    int i;
    for (i = 0; i < 45; i++) {
        acc27 = xn[idx_arr[i]];
        x55 = dat67 % val95;
        dat67 = v18 - 100;
        v18 = tmp12;
        v14 = dat67;
        tmp12 = z49;
        acc27 = val95 % v14;
        *ptr = *ptr + 1;
    }
}
int main() { test_func(); return 0; }

