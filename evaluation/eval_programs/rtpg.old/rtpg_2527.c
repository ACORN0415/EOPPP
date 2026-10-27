// RTPG_2527: vars=7 stmts=8
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int cnt12 = 10;
    int tmp45 = 47;
    int acc47 = 28;
    int b70 = 1;
    int a73 = 5;
    int hi75 = -20;
    int c53 = 41941;
    int i;
    for (i = 0; i < 16; i++) {
        b70 = xn[i];
        cnt12 = xn[idx_arr[i]];
        cnt12 = cnt12 - tmp45;
        c53 = b70 / hi75;
        c53 = hi75 - b70;
        cnt12 = cnt12 + 2;
        b70 = tmp45 % b70;
        cnt12 = tmp45 & a73;
        c53 = hi75 | c53;
        c53 = a73 - 9;
        yo[i] = b70;
    }
}
int main() { test_func(); return 0; }

