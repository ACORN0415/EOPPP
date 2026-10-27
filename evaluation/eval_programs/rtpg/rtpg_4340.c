// RTPG_4340: vars=8 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int tmp59 = -27;
    int hi39 = 47;
    int a31 = 6;
    int prev43 = 1;
    int z94 = 38;
    int x62 = 40;
    int cnt49 = 24;
    int b26 = 3;
    int i;
    for (i = 0; i < 16; i++) {
        hi39 = xn[i];
        cnt49 = hi39 - prev43;
        hi39 = prev43 - a31;
        a31 = a31 - 1;
        a31 = a31 + 4;
        yo[i] = cnt49;
    }
}
int main() { test_func(); return 0; }

