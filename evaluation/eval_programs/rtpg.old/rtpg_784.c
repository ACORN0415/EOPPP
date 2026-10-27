// RTPG_784: vars=8 stmts=3
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int c43 = 2;
    int y82 = 0;
    int y88 = 40;
    int hi78 = -4;
    int y64 = 11694;
    int b20 = -45;
    int prev38 = 50;
    int z5 = 14865;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int h2 = 15;
    int sv2 = 0;
    int h3 = 4;
    int sv3 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b20 = xn[i];
        hi78 = xn[idx_arr[i]];
        y64 = y82 & c43;
        y88 = hi78 * 10;
        y64 = z5 ^ hi78;
        yo[i] = y64;
    }
}
int main() { test_func(); return 0; }

