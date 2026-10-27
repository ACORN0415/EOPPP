// RTPG_7032: vars=8 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int b70 = 9317;
    int v78 = 37;
    int x56 = 0;
    int prev15 = 7;
    int c6 = 26508;
    int val6 = 21584;
    int cur39 = 36341;
    int dat27 = 98;
    int *ptr = &c6;
    int i;
    for (i = 0; i < 64; i++) {
        dat27 = xn[i];
        c6 = val6 - 52050;
        c6 = c6 + 2;
        *ptr = *ptr + 1;
        yo[i] = c6;
    }
}
int main() { test_func(); return 0; }

