// RTPG_7258: vars=7 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int x78 = 84;
    int y28 = 40;
    float lo67 = 92.45;
    float tmp27 = 4.90;
    int tmp71 = 1;
    int cur13 = 41;
    int c23 = 3;
    int *ptr = &tmp71;
    int i;
    for (i = 0; i < 32; i++) {
        tmp27 = xn[i];
        lo67 = lo67 - 5;
        c23 = x78 + -16;
        *ptr = *ptr + 2;
        yo[i] = cur13;
    }
}
int main() { test_func(); return 0; }

