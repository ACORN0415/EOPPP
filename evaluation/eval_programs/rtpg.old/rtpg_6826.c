// RTPG_6826: vars=6 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int prev37 = 3;
    int cur30 = 63;
    int cnt92 = -47;
    int sum34 = 8;
    int hi32 = -36;
    int cur54 = -1;
    int *ptr = &cur30;
    int i;
    for (i = 0; i < 32; i++) {
        prev37 = xn[i];
        hi32 = hi32 - 4;
        cur30 = cur30 + 2;
        sum34 = cur30 - cnt92;
        prev37 = sum34;
        *ptr = *ptr + 4;
        if (cnt92 > -23) {
        prev37 = hi32 + 58696;
        }
        yo[i] = hi32;
    }
}
int main() { test_func(); return 0; }

