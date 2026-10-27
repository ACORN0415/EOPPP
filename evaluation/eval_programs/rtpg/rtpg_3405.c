// RTPG_3405: vars=7 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int hi99 = 54250;
    int tmp12 = -30;
    int a20 = 24362;
    int x58 = 36;
    int val52 = 13;
    int res20 = 56578;
    int hi64 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        val52 = xn[i];
        val52 = x58 - 2;
        res20 = val52 + res20;
        tmp12 = x58 + hi64;
        hi99 = hi64 + hi99;
        x58 = hi64 - a20;
        tmp12 = res20 - res20;
        hi99 = hi99 - 2;
        hi64 = res20;
        yo[i] = hi99;
    }
}
int main() { test_func(); return 0; }

