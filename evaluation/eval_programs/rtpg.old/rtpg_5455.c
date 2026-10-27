// RTPG_5455: vars=9 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int lo92 = 17470;
    int x15 = 8;
    int cnt63 = 2;
    int v5 = 22720;
    int out15 = 4;
    int a34 = 47597;
    int v40 = 49;
    int res39 = 1;
    int out72 = 49;
    int i;
    for (i = 0; i < 16; i++) {
        out15 = xn[i];
        x15 = out72 % out15;
        cnt63 = v40 % v5;
        res39 = res39 + 3;
        yo[i] = x15;
    }
}
int main() { test_func(); return 0; }

