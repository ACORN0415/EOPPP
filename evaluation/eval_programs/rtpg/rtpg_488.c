// RTPG_488: vars=6 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int lo80 = 9;
    int sum61 = 49;
    int x32 = 24;
    int dat88 = 2;
    int tmp10 = 27400;
    int z46 = 8;
    int i;
    for (i = 0; i < 16; i++) {
        lo80 = xn[i];
        tmp10 = x32 - dat88;
        sum61 = sum61 + lo80;
        lo80 = tmp10 - lo80;
        dat88 = dat88 + 2;
        sum61 = lo80;
        lo80 = dat88 & sum61;
        yo[i] = lo80;
    }
}
int main() { test_func(); return 0; }

