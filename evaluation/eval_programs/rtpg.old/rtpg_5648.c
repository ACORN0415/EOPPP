// RTPG_5648: vars=4 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int dat32 = 70;
    int c54 = 5;
    int z3 = 54;
    int val95 = -47;
    int i;
    for (i = 0; i < 32; i++) {
        val95 = xn[i];
        dat32 = z3 - 84;
        c54 = z3 + dat32;
        z3 = dat32 + -30;
        c54 = val95 + z3;
        if (val95 < 90) {
        c54 = c54 - 4;
        }
        yo[i] = z3;
    }
}
int main() { test_func(); return 0; }

