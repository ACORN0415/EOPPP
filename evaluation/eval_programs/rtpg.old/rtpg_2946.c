// RTPG_2946: vars=3 stmts=7
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int z50 = 72;
    int res65 = 10;
    int tmp6 = 9;
    int i;
    for (i = 0; i < 32; i++) {
        tmp6 = xn[i];
        tmp6 = xn[idx_arr[i]];
        z50 = res65 % res65;
        tmp6 = tmp6 + 2;
        z50 = z50 - 70;
        z50 = z50 - res65;
        tmp6 = tmp6;
        tmp6 = tmp6;
        z50 = tmp6 - z50;
        yo[i] = z50;
    }
}
int main() { test_func(); return 0; }

