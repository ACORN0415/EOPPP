// RTPG_103: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int hi27 = 30;
    int hi61 = 8913;
    int a22 = 32384;
    int v84 = 5;
    int *ptr = &v84;
    int i;
    for (i = 0; i < 16; i++) {
        hi27 = xn[i];
        v84 = hi61 - v84;
        hi61 = v84 - 46;
        a22 = hi27 + hi61;
        *ptr = *ptr + 4;
        if (hi27 == -29) {
        hi61 = a22 - v84;
        }
        yo[i] = a22;
    }
}
int main() { test_func(); return 0; }

