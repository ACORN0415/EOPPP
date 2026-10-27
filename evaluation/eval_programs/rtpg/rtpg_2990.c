// RTPG_2990: vars=5 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int out38 = 8;
    int hi56 = 41;
    int dat12 = 33;
    int lo81 = 1;
    int val43 = 43;
    int i;
    for (i = 0; i < 64; i++) {
        dat12 = xn[i];
        hi56 = out38 + -42;
        val43 = dat12 - 71;
        val43 = dat12 - hi56;
        val43 = val43 - 2;
        out38 = out38 - hi56;
        dat12 = dat12 - val43;
        lo81 = lo81 + 5;
        out38 = dat12 - out38;
        dat12 = dat12 - 1;
        yo[i] = out38;
    }
}
int main() { test_func(); return 0; }

