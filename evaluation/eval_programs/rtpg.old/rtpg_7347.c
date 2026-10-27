// RTPG_7347: vars=5 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int y81 = -43;
    int cnt98 = 37;
    int y92 = 4;
    int dat52 = 6;
    int hi93 = 46386;
    int i;
    for (i = 0; i < 32; i++) {
        hi93 = xn[i];
        y81 = hi93 - 18;
        y81 = y81 + 3;
        y81 = dat52 + 31;
        dat52 = y81 + cnt98;
        dat52 = cnt98 + y81;
        yo[i] = hi93;
    }
}
int main() { test_func(); return 0; }

