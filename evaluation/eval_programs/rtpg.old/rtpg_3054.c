// RTPG_3054: vars=7 stmts=3
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int a81 = 6;
    int cur27 = 3;
    int cur64 = 11;
    int res19 = 12450;
    int c58 = 22;
    int dat96 = 74;
    int y49 = 13386;
    int i;
    for (i = 0; i < 64; i++) {
        res19 = xn[i];
        y49 = xn[idx_arr[i]];
        dat96 = dat96 + 2;
        cur27 = y49;
        c58 = y49 - a81;
        if (y49 == 61) {
        res19 = res19 + -36;
        }
        yo[i] = y49;
    }
}
int main() { test_func(); return 0; }

