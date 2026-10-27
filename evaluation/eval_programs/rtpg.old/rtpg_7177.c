// RTPG_7177: vars=5 stmts=6
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int z69 = 16;
    int dat34 = 55;
    int c47 = -15;
    int tmp2 = 3;
    int y99 = 25975;
    int i;
    for (i = 0; i < 16; i++) {
        c47 = xn[i];
        z69 = xn[idx_arr[i]];
        tmp2 = tmp2 + 3;
        c47 = tmp2 - dat34;
        c47 = c47 - 5;
        y99 = c47 + y99;
        c47 = z69 + 56;
        tmp2 = c47 + 42896;
        if (dat34 >= 73) {
        y99 = y99 + 4;
        }
        yo[i] = c47;
    }
}
int main() { test_func(); return 0; }

