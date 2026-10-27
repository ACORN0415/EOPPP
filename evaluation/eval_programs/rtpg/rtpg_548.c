// RTPG_548: vars=8 stmts=5
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int out98 = 58044;
    int prev14 = 26;
    int a46 = 73;
    int dat73 = -3;
    int tmp97 = 32;
    int c48 = -48;
    int b87 = 2;
    int c82 = 40;
    int i;
    for (i = 0; i < 16; i++) {
        tmp97 = xn[i];
        prev14 = xn[idx_arr[i]];
        c48 = c48 + 2;
        prev14 = prev14 - 6;
        out98 = b87 - c82;
        dat73 = b87;
        prev14 = out98;
        yo[i] = out98;
    }
}
int main() { test_func(); return 0; }

