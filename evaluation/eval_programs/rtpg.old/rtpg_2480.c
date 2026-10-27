// RTPG_2480: vars=8 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int v85 = 33285;
    int y54 = 0;
    int prev78 = 37652;
    int x76 = 99;
    int acc69 = 8;
    int dat12 = 26726;
    int out15 = 56;
    int b81 = 54642;
    int i;
    for (i = 0; i < 64; i++) {
        v85 = xn[i];
        v85 = out15 + dat12;
        out15 = out15;
        out15 = x76 + 86;
        v85 = b81;
        dat12 = v85 + 39559;
        acc69 = acc69 - 2;
        y54 = v85 + b81;
        if (y54 < 8) {
        y54 = y54 + 1;
        }
        yo[i] = out15;
    }
}
int main() { test_func(); return 0; }

