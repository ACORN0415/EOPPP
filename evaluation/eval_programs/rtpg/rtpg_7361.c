// RTPG_7361: vars=10 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int prev51 = 96;
    int dat51 = 1380;
    int b67 = 58;
    int tmp13 = 15;
    int b98 = 52;
    int b38 = 44;
    int cnt12 = 0;
    int b63 = 9;
    int cur60 = 50;
    int y88 = 29;
    int *ptr = &prev51;
    int i;
    for (i = 0; i < 64; i++) {
        prev51 = xn[i];
        cur60 = y88 - b98;
        prev51 = prev51 + dat51;
        y88 = y88;
        y88 = dat51 + dat51;
        prev51 = prev51 + 4;
        prev51 = y88 - b98;
        b67 = b67 - 5;
        *ptr = *ptr + 2;
        if (cnt12 <= -42) {
        b67 = b63 - -32;
        }
        yo[i] = b67;
    }
}
int main() { test_func(); return 0; }

