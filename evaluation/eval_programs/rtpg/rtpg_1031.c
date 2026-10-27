// RTPG_1031: vars=3 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int c12 = -37;
    int hi57 = 73;
    int dat86 = 26093;
    int *ptr = &hi57;
    int i;
    for (i = 0; i < 32; i++) {
        hi57 = xn[i];
        hi57 = hi57 - dat86;
        hi57 = hi57 + c12;
        hi57 = hi57 - 2;
        dat86 = dat86 + 5;
        hi57 = hi57 + dat86;
        *ptr = *ptr + 1;
        yo[i] = c12;
    }
}
int main() { test_func(); return 0; }

