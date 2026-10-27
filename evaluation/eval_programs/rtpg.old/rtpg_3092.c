// RTPG_3092: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int v58 = 12395;
    int hi77 = 43;
    int x74 = 8;
    int tmp81 = 47769;
    int res84 = 42;
    int acc60 = 32334;
    int y83 = -16;
    int a21 = 47;
    int i;
    for (i = 0; i < 64; i++) {
        acc60 = xn[i];
        tmp81 = hi77;
        v58 = a21 - acc60;
        a21 = res84 - a21;
        y83 = hi77 - res84;
        acc60 = tmp81 + a21;
        yo[i] = v58;
    }
}
int main() { test_func(); return 0; }

