// RTPG_1050: vars=9 stmts=3
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int v53 = 5;
    int sum1 = 16;
    int out23 = 53;
    int dat62 = 7;
    int c99 = 46028;
    int y27 = 31;
    int x87 = 1;
    int x5 = 56044;
    int y32 = -27;
    int i;
    for (i = 0; i < 16; i++) {
        x5 = xn[i];
        x87 = xn[idx_arr[i]];
        y27 = c99 - x87;
        dat62 = c99 + v53;
        x5 = y32;
        if (x87 > -50) {
        y27 = c99 - sum1;
        }
        yo[i] = v53;
    }
}
int main() { test_func(); return 0; }

