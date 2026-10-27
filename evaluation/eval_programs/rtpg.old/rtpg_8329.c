// RTPG_8329: vars=3 stmts=3
int xn[32];
int yo[32];
int idx_arr[32];
void test_func(void) {
    int res31 = -30;
    int c93 = 6;
    int x25 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res31 = xn[i];
        c93 = xn[idx_arr[i]];
        c93 = x25 - 4;
        c93 = c93 - x25;
        x25 = x25 - 5;
        yo[i] = x25;
    }
}
int main() { test_func(); return 0; }

