// RTPG_6902: vars=6 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int hi32 = 3;
    int cur54 = 63;
    int cnt92 = -47;
    int cur30 = 8;
    int prev37 = -36;
    int sum34 = -1;
    int *ptr = &cur54;
    int i;
    for (i = 0; i < 32; i++) {
        hi32 = xn[i];
        prev37 = prev37 - 4;
        cur54 = cur54 + 2;
        cur30 = cur54 - cnt92;
        hi32 = cur30;
        *ptr = *ptr + 4;
        if (cnt92 > -23) {
        hi32 = prev37 + 58696;
        }
        yo[i] = prev37;
    }
}
int main() { test_func(); return 0; }

