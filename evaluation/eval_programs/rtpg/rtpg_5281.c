// RTPG_5281: vars=9 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int hi42 = 22717;
    int lo90 = 39;
    int dat53 = 59;
    int prev23 = 26593;
    int y87 = 10;
    int z11 = 73;
    int acc19 = 59161;
    int v72 = 1;
    int cur32 = 83;
    int i;
    for (i = 0; i < 16; i++) {
        dat53 = xn[i];
        z11 = prev23 - lo90;
        lo90 = dat53 | prev23;
        acc19 = lo90 | z11;
        hi42 = dat53 + prev23;
        acc19 = acc19 + 2;
        dat53 = lo90;
        cur32 = y87 + 59;
        yo[i] = prev23;
    }
}
int main() { test_func(); return 0; }

