// RTPG_1471: vars=4 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int dat91 = 50;
    int b31 = 1028;
    int z24 = 24599;
    int b25 = 56144;
    int i;
    for (i = 0; i < 16; i++) {
        z24 = xn[i];
        b31 = z24 + b31;
        dat91 = dat91 + z24;
        b31 = b31 + 2;
        z24 = z24 - 4;
        dat91 = dat91 + 2;
        dat91 = dat91 + b25;
        z24 = b31 - b31;
        b25 = b31 - 49978;
        yo[i] = b25;
    }
}
int main() { test_func(); return 0; }

