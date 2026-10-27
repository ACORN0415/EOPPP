// RTPG_7757: vars=5 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int tmp30 = 44689;
    int y65 = 7;
    int hi35 = 31;
    int tmp34 = 36221;
    int a4 = 76;
    int *ptr = &y65;
    int i;
    for (i = 0; i < 16; i++) {
        a4 = xn[i];
        y65 = y65;
        hi35 = y65 - hi35;
        y65 = tmp30 + hi35;
        hi35 = y65;
        y65 = y65 + 1;
        y65 = hi35 + 93;
        *ptr = *ptr + 4;
        yo[i] = a4;
    }
}
int main() { test_func(); return 0; }

