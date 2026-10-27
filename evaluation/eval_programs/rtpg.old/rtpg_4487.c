// RTPG_4487: vars=4 stmts=5
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int b53 = 87;
    int a76 = 55;
    int sum9 = 69;
    int y50 = 5;
    int i;
    for (i = 0; i < 32; i++) {
        y50 = xn[i];
        sum9 = xn[idx_arr[i]];
        a76 = a76 - 4;
        y50 = y50;
        b53 = a76 & sum9;
        a76 = a76 - b53;
        a76 = y50 & y50;
        yo[i] = sum9;
    }
}
int main() { test_func(); return 0; }

