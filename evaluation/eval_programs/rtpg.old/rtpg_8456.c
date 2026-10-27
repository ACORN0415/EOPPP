// RTPG_8456: vars=7 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int prev59 = 18;
    int x8 = 8;
    int tmp76 = 67;
    int res50 = 79;
    int lo5 = 33;
    int out19 = 2;
    int hi19 = 62024;
    int i;
    for (i = 0; i < 64; i++) {
        res50 = xn[i];
        res50 = hi19 - tmp76;
        out19 = out19 + res50;
        if (tmp76 > 26) goto done;
        yo[i] = lo5;
    }
done:
    x8 = 0;
}
int main() { test_func(); return 0; }

