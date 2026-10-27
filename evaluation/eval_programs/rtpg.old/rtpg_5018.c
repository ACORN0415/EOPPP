// RTPG_5018: vars=6 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int res16 = 23;
    int z87 = 99;
    int out54 = -46;
    int c53 = 70;
    int acc44 = 12482;
    int sum19 = -34;
    int i;
    for (i = 0; i < 32; i++) {
        out54 = xn[i];
        out54 = out54 + res16;
        c53 = z87 - 10;
        out54 = out54;
        c53 = c53;
        acc44 = z87 - out54;
        z87 = z87 + 5;
        acc44 = sum19 - out54;
        yo[i] = acc44;
    }
}
int main() { test_func(); return 0; }

