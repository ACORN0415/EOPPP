// RTPG_8450: vars=6 stmts=10
int xn[32];
int yo[32];
void test_func(void) {
    int dat20 = 8;
    int y80 = 43;
    int lo36 = 33;
    int hi13 = 56808;
    int res62 = 52;
    int prev52 = 61;
    int i;
    for (i = 0; i < 32; i++) {
        hi13 = xn[i];
        lo36 = lo36 + 2;
        lo36 = lo36 + 5;
        lo36 = lo36 - hi13;
        prev52 = prev52 - 1;
        hi13 = hi13 + y80;
        dat20 = lo36 - res62;
        y80 = y80 + 2;
        y80 = prev52 / dat20;
        prev52 = prev52 + res62;
        hi13 = lo36 - prev52;
        if (res62 != -6) {
        y80 = res62 + res62;
        }
        yo[i] = dat20;
    }
}
int main() { test_func(); return 0; }

