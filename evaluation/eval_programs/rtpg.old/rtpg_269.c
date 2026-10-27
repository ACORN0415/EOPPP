// RTPG_269: vars=5 stmts=4
int xn[64];
int yo[64];
int idx_arr[64];
void test_func(void) {
    int y87 = 24220;
    int v55 = 3869;
    int x50 = 3;
    int a40 = 57073;
    int c83 = 84;
    int i;
    for (i = 0; i < 64; i++) {
        v55 = xn[i];
        v55 = xn[idx_arr[i]];
        x50 = y87 - -15;
        v55 = v55 - 1;
        a40 = a40 + 3;
        c83 = v55 + x50;
        if (a40 > -3) {
        y87 = a40 - 84;
        }
        yo[i] = x50;
    }
}
int main() { test_func(); return 0; }

