// RTPG_5829: vars=8 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int acc78 = 49;
    int cur42 = -2;
    int cnt91 = -48;
    int y73 = 1;
    int dat12 = 3;
    int hi20 = 6;
    int lo98 = 48;
    int tmp51 = 0;
    int *ptr = &hi20;
    int i;
    for (i = 0; i < 32; i++) {
        cnt91 = xn[i];
        dat12 = dat12 - 32;
        hi20 = hi20 + dat12;
        *ptr = *ptr + 2;
        if (y73 != -41) {
        y73 = y73 + 5;
        }
        yo[i] = y73;
    }
}
int main() { test_func(); return 0; }

