// RTPG_5973: vars=8 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int acc11 = 5;
    int val38 = 27;
    int y6 = 16921;
    int val23 = 51695;
    int y40 = 30561;
    int y99 = 34;
    int prev12 = 29238;
    int y7 = 52;
    int i;
    for (i = 0; i < 16; i++) {
        val23 = xn[i];
        y40 = y7;
        y7 = y6 - 3;
        y6 = y99;
        yo[i] = acc11;
    }
}
int main() { test_func(); return 0; }

