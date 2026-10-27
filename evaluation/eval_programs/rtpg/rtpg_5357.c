// RTPG_5357: vars=5 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int dat53 = 3;
    int dat3 = 2;
    int c84 = 27695;
    int acc85 = 99;
    int b7 = 3;
    int i;
    for (i = 0; i < 32; i++) {
        b7 = xn[i];
        dat53 = b7 - 3;
        dat53 = dat53 + acc85;
        dat3 = dat3 - 5;
        c84 = c84 + acc85;
        acc85 = acc85 + 2;
        dat3 = dat3 + c84;
        dat3 = dat3;
        yo[i] = dat3;
    }
}
int main() { test_func(); return 0; }

