// RTPG_7699: vars=5 stmts=7
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int sum21 = 68;
    int cur37 = 14;
    int sum24 = 50;
    int dat10 = 4;
    int y37 = 36;
    int i;
    for (i = 0; i < 32; i++) {
        dat10 = xn[i];
        sum24 = xn[idx_arr[i]];
        sum24 = y37 - sum21;
        cur37 = cur37 + cur37;
        dat10 = y37 + -9;
        cur37 = dat10 - 95;
        sum24 = sum24 - -34;
        sum24 = sum21;
        y37 = y37 - 1;
        yo[i] = y37;
    }
}
int main() { test_func(); return 0; }

