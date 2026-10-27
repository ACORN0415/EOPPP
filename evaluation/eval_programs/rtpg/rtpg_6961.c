// RTPG_6961: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int hi99 = 36538;
    int a51 = 10;
    int y6 = 87;
    int cur5 = 34;
    int lo5 = 75;
    int *ptr = &hi99;
    int i;
    for (i = 0; i < 64; i++) {
        y6 = xn[i];
        hi99 = hi99;
        hi99 = lo5 + 10;
        *ptr = *ptr + 1;
        yo[i] = hi99;
    }
}
int main() { test_func(); return 0; }

