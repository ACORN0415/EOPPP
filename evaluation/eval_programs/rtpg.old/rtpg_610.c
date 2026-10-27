// RTPG_610: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int lo1 = 9;
    int hi95 = 5;
    int y38 = 82;
    int tmp74 = 2;
    int i;
    for (i = 0; i < 64; i++) {
        tmp74 = xn[i];
        hi95 = y38;
        y38 = hi95 - y38;
        lo1 = lo1 + 53;
        if (lo1 > -46) goto done;
        yo[i] = lo1;
    }
done:
    y38 = 0;
}
int main() { test_func(); return 0; }

