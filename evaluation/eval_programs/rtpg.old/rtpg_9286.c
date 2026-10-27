// RTPG_9286: vars=4 stmts=2
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int x15 = 24;
    int cnt5 = -38;
    int y0 = 51891;
    int b13 = -28;
    int *ptr = &x15;
    int i;
    for (i = 0; i < 16; i++) {
        x15 = xn[i];
        x15 = xn[idx_arr[i]];
        y0 = cnt5 - b13;
        y0 = b13 + x15;
        *ptr = *ptr + 4;
        yo[i] = b13;
    }
}
int main() { test_func(); return 0; }

