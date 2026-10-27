// RTPG_3085: vars=8 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int x74 = 12395;
    int tmp81 = 43;
    int hi77 = 8;
    int y83 = 47769;
    int v58 = 42;
    int res84 = 32334;
    int a21 = -16;
    int acc60 = 47;
    int i;
    for (i = 0; i < 64; i++) {
        res84 = xn[i];
        y83 = tmp81;
        x74 = acc60 - res84;
        acc60 = v58 - acc60;
        a21 = tmp81 - v58;
        res84 = y83 + acc60;
        yo[i] = x74;
    }
}
int main() { test_func(); return 0; }

