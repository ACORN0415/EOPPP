// RTPG_533: vars=9 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int val77 = 36628;
    int res77 = 28805;
    int out18 = 1464;
    int prev71 = 10;
    int b14 = -21;
    int y79 = -24;
    int a7 = 28;
    int c6 = 17814;
    int a14 = 79;
    int i;
    for (i = 0; i < 16; i++) {
        val77 = xn[i];
        res77 = res77 - 2;
        val77 = a7 - y79;
        c6 = c6 - a14;
        res77 = val77 - -24;
        val77 = a7 - prev71;
        out18 = out18 - 4;
        a14 = a14 - 3;
        c6 = a14;
        prev71 = c6 - val77;
        res77 = res77 - 3;
        val77 = prev71 + b14;
        val77 = prev71;
        yo[i] = a14;
    }
}
int main() { test_func(); return 0; }

