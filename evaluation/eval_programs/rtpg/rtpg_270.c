// RTPG_270: vars=5 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int c83 = 24220;
    int a40 = 3869;
    int y87 = 3;
    int v55 = 57073;
    int x50 = 84;
    int i;
    for (i = 0; i < 64; i++) {
        a40 = xn[i];
        a40 = xn[idx_arr[i]];
        y87 = c83 - -15;
        a40 = a40 - 1;
        v55 = v55 + 3;
        x50 = a40 + y87;
        if (v55 > -3) {
        c83 = v55 - 84;
        }
        yo[i] = y87;
    }
}
int main() { test_func(); return 0; }

