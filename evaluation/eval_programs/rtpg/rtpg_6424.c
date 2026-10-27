// RTPG_6424: vars=7 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int val0 = 10554;
    int z88 = 8;
    int z58 = 38586;
    int cur84 = 83;
    int tmp4 = 45;
    int dat27 = 30;
    int prev81 = 40;
    int i;
    for (i = 0; i < 16; i++) {
        z88 = xn[i];
        z88 = xn[idx_arr[i]];
        z58 = z58 + tmp4;
        val0 = tmp4 + 65036;
        cur84 = tmp4 + z88;
        z58 = cur84 - 10;
        if (z88 <= 4) {
        z88 = val0;
        }
        yo[i] = dat27;
    }
}
int main() { test_func(); return 0; }

