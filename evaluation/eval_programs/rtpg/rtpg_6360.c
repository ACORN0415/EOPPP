// RTPG_6360: vars=10 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int hi48 = 70;
    int res58 = 32;
    int a81 = 22;
    int val56 = 33617;
    int acc53 = 59;
    int cur71 = 29;
    int x17 = 28085;
    int cnt37 = 45526;
    int c92 = 9;
    int lo43 = 33426;
    int i;
    for (i = 0; i < 64; i++) {
        res58 = xn[i];
        acc53 = lo43 - 3;
        hi48 = hi48 + 3;
        val56 = x17 - lo43;
        a81 = cur71 + cnt37;
        hi48 = lo43;
        lo43 = hi48 + lo43;
        cur71 = hi48 - x17;
        val56 = cnt37 + 0;
        acc53 = hi48 + 48051;
        x17 = res58 + 74;
        a81 = acc53 + c92;
        cnt37 = c92;
        if (cur71 > 26) goto done;
        yo[i] = val56;
    }
done:
    acc53 = 0;
}
int main() { test_func(); return 0; }

