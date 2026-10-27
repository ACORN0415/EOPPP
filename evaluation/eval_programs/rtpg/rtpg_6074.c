// RTPG_6074: vars=8 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int val23 = 5;
    int y6 = 27;
    int y99 = 16921;
    int y40 = 51695;
    int prev12 = 30561;
    int val38 = 34;
    int y7 = 29238;
    int acc11 = 52;
    int i;
    for (i = 0; i < 16; i++) {
        y40 = xn[i];
        prev12 = acc11;
        acc11 = y99 - 3;
        y99 = val38;
        yo[i] = val23;
    }
}
int main() { test_func(); return 0; }

