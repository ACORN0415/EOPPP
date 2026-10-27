// RTPG_2998: vars=5 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int lo81 = 8;
    int dat12 = 41;
    int out38 = 33;
    int val43 = 1;
    int hi56 = 43;
    int i;
    for (i = 0; i < 64; i++) {
        out38 = xn[i];
        dat12 = lo81 + -42;
        hi56 = out38 - 71;
        hi56 = out38 - dat12;
        hi56 = hi56 - 2;
        lo81 = lo81 - dat12;
        out38 = out38 - hi56;
        val43 = val43 + 5;
        lo81 = out38 - lo81;
        out38 = out38 - 1;
        yo[i] = lo81;
    }
}
int main() { test_func(); return 0; }

