// RTPG_7042: vars=9 stmts=4
int idx_arr[64];
void test_func(void) {
    int v25 = 5;
    int res20 = 40089;
    int b46 = 3;
    int b69 = 0;
    float c42 = 4.72;
    int cur33 = 9842;
    int val16 = 1;
    int cur87 = 16149;
    int dat55 = 10;
    int i;
    for (i = 0; i < 9; i++) {
        dat55 = xn[idx_arr[i]];
        b69 = b69 ^ c42;
        b69 = b69 - 2;
        b46 = c42 - v25;
        dat55 = v25 | b69;
        if (v25 < 94) {
        c42 = c42 - 4;
        }
    }
}
int main() { test_func(); return 0; }

