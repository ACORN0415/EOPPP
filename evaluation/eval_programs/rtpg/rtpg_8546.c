// RTPG_8546: vars=5 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int acc44 = 4;
    int acc5 = 50;
    int x10 = 63;
    int cnt18 = -50;
    int a82 = 32;
    int i;
    for (i = 0; i < 64; i++) {
        a82 = xn[i];
        acc44 = cnt18 + a82;
        acc5 = acc5 + acc5;
        cnt18 = cnt18 - acc44;
        a82 = cnt18;
        x10 = a82;
        acc44 = acc5;
        acc44 = cnt18 + -16;
        a82 = a82;
        yo[i] = a82;
    }
}
int main() { test_func(); return 0; }

