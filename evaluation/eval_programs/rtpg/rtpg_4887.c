// RTPG_4887: vars=10 stmts=2
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int a67 = 21575;
    int dat34 = 11;
    int lo14 = 34461;
    int cnt16 = 47;
    int prev25 = 54631;
    int c55 = 5;
    int tmp65 = -44;
    int acc45 = 27;
    int val72 = -39;
    int b4 = 13311;
    int i;
    for (i = 0; i < 16; i++) {
        dat34 = xn[i];
        a67 = xn[idx_arr[i]];
        a67 = prev25 + dat34;
        a67 = a67 - 2;
        if (a67 > 81) {
        tmp65 = val72 - cnt16;
        }
        yo[i] = lo14;
    }
}
int main() { test_func(); return 0; }

