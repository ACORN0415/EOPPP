// RTPG_4760: vars=3 stmts=10
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int out22 = 48;
    int lo97 = 21;
    int a84 = 63;
    int i;
    for (i = 0; i < 64; i++) {
        lo97 = xn[i];
        out22 = xn[idx_arr[i]];
        out22 = out22 + 3;
        out22 = lo97 - out22;
        lo97 = out22 & lo97;
        a84 = lo97 + out22;
        lo97 = lo97;
        a84 = a84 % out22;
        a84 = lo97 - 1;
        a84 = lo97 + a84;
        a84 = lo97 % a84;
        a84 = a84 | lo97;
        yo[i] = lo97;
    }
}
int main() { test_func(); return 0; }

