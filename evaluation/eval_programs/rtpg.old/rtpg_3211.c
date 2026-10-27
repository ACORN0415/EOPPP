// RTPG_3211: vars=7 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int lo6 = 8;
    int v58 = 3328;
    int cnt62 = 39597;
    int z23 = 17881;
    int tmp74 = 63261;
    int v45 = 37;
    int res12 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        lo6 = xn[i];
        v58 = tmp74 + v58;
        lo6 = lo6 - 2;
        yo[i] = tmp74;
    }
}
int main() { test_func(); return 0; }

