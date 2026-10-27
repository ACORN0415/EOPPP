// RTPG_1082: vars=4 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int hi84 = 29274;
    int y23 = -47;
    int dat14 = 0;
    int prev20 = -23;
    int i;
    for (i = 0; i < 16; i++) {
        y23 = xn[i];
        y23 = hi84;
        dat14 = prev20 - y23;
        yo[i] = dat14;
    }
}
int main() { test_func(); return 0; }

