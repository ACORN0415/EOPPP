// RTPG_6885: vars=5 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int a51 = 36538;
    int hi99 = 10;
    int cur5 = 87;
    int y6 = 34;
    int lo5 = 75;
    int *ptr = &a51;
    int i;
    for (i = 0; i < 64; i++) {
        cur5 = xn[i];
        a51 = a51;
        a51 = lo5 + 10;
        *ptr = *ptr + 1;
        yo[i] = a51;
    }
}
int main() { test_func(); return 0; }

