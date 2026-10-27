// RTPG_3394: vars=7 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int a20 = 54250;
    int res20 = -30;
    int hi64 = 24362;
    int hi99 = 36;
    int val52 = 13;
    int x58 = 56578;
    int tmp12 = 6;
    int i;
    for (i = 0; i < 32; i++) {
        val52 = xn[i];
        val52 = hi99 - 2;
        x58 = val52 + x58;
        res20 = hi99 + tmp12;
        a20 = tmp12 + a20;
        hi99 = tmp12 - hi64;
        res20 = x58 - x58;
        a20 = a20 - 2;
        tmp12 = x58;
        yo[i] = a20;
    }
}
int main() { test_func(); return 0; }

