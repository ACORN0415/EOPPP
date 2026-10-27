// RTPG_4699: vars=3 stmts=10
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int a84 = 48;
    int out22 = 21;
    int lo97 = 63;
    int i;
    for (i = 0; i < 64; i++) {
        out22 = xn[i];
        a84 = xn[idx_arr[i]];
        a84 = a84 + 3;
        a84 = out22 - a84;
        lo97 = a84 / lo97;
        out22 = lo97 - out22;
        lo97 = lo97 + 3;
        lo97 = out22 ^ out22;
        a84 = lo97 - 55016;
        a84 = lo97;
        out22 = out22 | lo97;
        a84 = out22;
        yo[i] = a84;
    }
}
int main() { test_func(); return 0; }

