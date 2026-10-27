// RTPG_3864: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int hi5 = 4;
    int prev20 = 31446;
    int lo82 = 91;
    int h0 = 82;
    int sv0 = 0;
    int h1 = 32;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        lo82 = xn[i];
        hi5 = lo82 * -17;
        prev20 = lo82;
        yo[i] = hi5;
    }
}
int main() { test_func(); return 0; }

