// RTPG_600: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int tmp74 = 9;
    int y38 = 5;
    int hi95 = 82;
    int lo1 = 2;
    int i;
    for (i = 0; i < 64; i++) {
        lo1 = xn[i];
        y38 = hi95;
        hi95 = y38 - hi95;
        tmp74 = tmp74 + 53;
        if (tmp74 > -46) goto done;
        yo[i] = tmp74;
    }
done:
    hi95 = 0;
}
int main() { test_func(); return 0; }

