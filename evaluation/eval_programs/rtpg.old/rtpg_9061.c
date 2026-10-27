// RTPG_9061: vars=9 stmts=3
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int val10 = 5;
    int tmp69 = 42180;
    int acc27 = 27155;
    int lo79 = 11;
    int res19 = 4;
    int x42 = 46;
    int lo26 = 42202;
    int res4 = 8;
    int x46 = -39;
    int *ptr = &lo26;
    int i;
    for (i = 0; i < 16; i++) {
        res19 = xn[i];
        tmp69 = xn[idx_arr[i]];
        val10 = val10 - -3;
        val10 = res4 + x42;
        acc27 = tmp69 - res4;
        *ptr = *ptr + 5;
        yo[i] = val10;
    }
}
int main() { test_func(); return 0; }

