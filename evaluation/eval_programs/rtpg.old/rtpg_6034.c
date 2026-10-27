// RTPG_6034: vars=6 stmts=9
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int y34 = 5;
    int y80 = 22510;
    int a52 = -38;
    int v52 = 8;
    int val12 = 36;
    int tmp71 = 21614;
    int i;
    for (i = 0; i < 16; i++) {
        y34 = xn[i];
        v52 = xn[idx_arr[i]];
        val12 = a52 - tmp71;
        a52 = val12 + -38;
        y80 = y80 + 8300;
        y80 = y34;
        v52 = v52 + val12;
        tmp71 = val12 + 27;
        y34 = y34 + 4;
        val12 = y80 - val12;
        v52 = y80 - 6104;
        yo[i] = y34;
    }
}
int main() { test_func(); return 0; }

