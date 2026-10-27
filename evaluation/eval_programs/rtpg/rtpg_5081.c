// RTPG_5081: vars=6 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int acc44 = 23;
    int c53 = 99;
    int sum19 = -46;
    int out54 = 70;
    int res16 = 12482;
    int z87 = -34;
    int i;
    for (i = 0; i < 32; i++) {
        sum19 = xn[i];
        sum19 = sum19 + acc44;
        out54 = c53 - 10;
        sum19 = sum19;
        out54 = out54;
        res16 = c53 - sum19;
        c53 = c53 + 5;
        res16 = z87 - sum19;
        yo[i] = res16;
    }
}
int main() { test_func(); return 0; }

