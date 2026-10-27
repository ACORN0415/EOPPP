// RTPG_465: vars=7 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int val77 = 30632;
    int cnt40 = 5;
    int dat51 = 7;
    int c68 = -1;
    int out37 = -16;
    int y94 = 32;
    int hi28 = 3;
    int i;
    for (i = 0; i < 16; i++) {
        c68 = xn[i];
        out37 = val77;
        out37 = dat51 + cnt40;
        out37 = dat51;
        dat51 = c68 + cnt40;
        yo[i] = hi28;
    }
}
int main() { test_func(); return 0; }

