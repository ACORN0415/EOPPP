// RTPG_774: vars=7 stmts=2
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int z0 = 15114;
    int tmp60 = 2;
    int tmp65 = 9;
    int dat38 = 50909;
    int v51 = 7;
    int y31 = -16;
    int out2 = 31;
    int *ptr = &dat38;
    int i;
    for (i = 0; i < 16; i++) {
        dat38 = xn[i];
        dat38 = xn[idx_arr[i]];
        y31 = y31 + 2;
        y31 = v51 - out2;
        *ptr = *ptr + 2;
        yo[i] = z0;
    }
}
int main() { test_func(); return 0; }

