// RTPG_2555: vars=9 stmts=10
int xn[64];
int yo[64];
void test_func(void) {
    int out52 = 24765;
    int b61 = 56638;
    int y73 = 6;
    int c44 = -29;
    int tmp72 = 5195;
    int prev62 = 2;
    int cur76 = 3;
    int x6 = 60;
    int out45 = 9;
    int i;
    for (i = 0; i < 64; i++) {
        cur76 = xn[i];
        y73 = y73 - 3;
        out45 = prev62;
        out52 = out45 - out52;
        tmp72 = tmp72 + 1;
        tmp72 = cur76 + -45;
        x6 = b61 - 1;
        x6 = c44 - out45;
        x6 = y73 + cur76;
        tmp72 = tmp72 + 1;
        b61 = tmp72 + 20412;
        yo[i] = y73;
    }
}
int main() { test_func(); return 0; }

