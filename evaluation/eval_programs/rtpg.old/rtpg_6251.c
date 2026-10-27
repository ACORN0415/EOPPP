// RTPG_6251: vars=7 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int val92 = 2;
    int hi40 = 97;
    int v95 = 10;
    int a75 = 18;
    int c26 = 4;
    int x46 = 15;
    int cur58 = 66;
    int i;
    for (i = 0; i < 32; i++) {
        v95 = xn[i];
        a75 = a75;
        val92 = c26 - 45;
        hi40 = hi40 + val92;
        a75 = x46 + hi40;
        c26 = x46 + a75;
        x46 = a75 + c26;
        val92 = hi40 - a75;
        cur58 = a75;
        yo[i] = val92;
    }
}
int main() { test_func(); return 0; }

