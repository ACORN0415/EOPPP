// RTPG_932: vars=5 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int a8 = 36;
    int x60 = 99;
    int y46 = -28;
    int res34 = 1;
    int lo15 = 58;
    int i;
    for (i = 0; i < 32; i++) {
        lo15 = xn[i];
        res34 = x60;
        res34 = res34 - y46;
        if (a8 > 51) goto done;
        if (res34 != -29) {
        y46 = lo15 - 2;
        }
        yo[i] = a8;
    }
done:
    res34 = 0;
}
int main() { test_func(); return 0; }

