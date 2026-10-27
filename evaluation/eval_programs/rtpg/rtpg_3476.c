// RTPG_3476: vars=18 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int out74 = 35622;
    int y13 = 11253;
    int c2 = 22;
    int out87 = -11;
    int cur90 = 48476;
    int out98 = 47100;
    int acc61 = 39;
    int prev38 = -18;
    int a95 = 53;
    int z37 = 33357;
    int tmp75 = 2;
    int acc67 = 66;
    int x54 = 42926;
    int y60 = -12;
    int dat7 = 28;
    int acc19 = 43;
    int v72 = 49;
    int val10 = 9;
    int *ptr = &out87;
    int i;
    for (i = 0; i < 16; i++) {
        v72 = xn[i];
        acc67 = cur90 + prev38;
        prev38 = tmp75;
        out87 = acc19 - prev38;
        y60 = y60 - prev38;
        *ptr = *ptr + 1;
        if (a95 > 10) goto done;
        yo[i] = x54;
    }
done:
    acc19 = 0;
}
int main() { test_func(); return 0; }

