// RTPG_9292: vars=3 stmts=9
int xn[16];
int yo[16];
void test_func(void) {
    int acc61 = 45;
    int prev86 = 3;
    int hi91 = 14;
    int h0 = 54165;
    int sv0 = 0;
    int h1 = 20;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev86 = xn[i];
        acc61 = prev86 * 5;
        prev86 = acc61 * 43;
        prev86 = acc61 + prev86;
        hi91 = acc61 - hi91;
        acc61 = hi91 - 28254;
        acc61 = prev86;
        hi91 = acc61 * 25029;
        acc61 = hi91 * -50;
        acc61 = hi91 * -16;
        yo[i] = prev86;
    }
}
int main() { test_func(); return 0; }

