// RTPG_5426: vars=18 stmts=8
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int z0 = 15583;
    int y60 = 24189;
    int cur21 = 3;
    int z98 = 68;
    int acc89 = 6;
    int cur55 = 10;
    int lo16 = 3;
    int a50 = 7;
    int cur3 = 3;
    int lo14 = 41948;
    int lo18 = 39;
    int sum61 = 55115;
    int acc21 = 40;
    int z70 = 49;
    int c56 = 40;
    int res96 = 0;
    int acc84 = -43;
    int cnt28 = 81;
    int *ptr = &acc84;
    int i;
    for (i = 0; i < 64; i++) {
        cur21 = xn[i];
        cur3 = xn[idx_arr[i]];
        a50 = a50 - 4;
        y60 = c56;
        z70 = z70 - 1;
        c56 = cur55 - 10;
        z0 = cur21 + cur55;
        acc89 = sum61 - lo14;
        z98 = acc21 - 59598;
        y60 = y60 + 3;
        *ptr = *ptr + 3;
        yo[i] = z0;
    }
done:
    c56 = 0;
}
int main() { test_func(); return 0; }

