// RTPG_7849: vars=5 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int tmp34 = 44689;
    int a4 = 7;
    int tmp30 = 31;
    int y65 = 36221;
    int hi35 = 76;
    int *ptr = &a4;
    int i;
    for (i = 0; i < 16; i++) {
        hi35 = xn[i];
        a4 = a4;
        tmp30 = a4 - tmp30;
        a4 = tmp34 + tmp30;
        tmp30 = a4;
        a4 = a4 + 1;
        a4 = tmp30 + 93;
        *ptr = *ptr + 4;
        yo[i] = hi35;
    }
}
int main() { test_func(); return 0; }

