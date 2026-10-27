// RTPG_6878: vars=7 stmts=11
void test_func(void) {
    int b37 = 2;
    int b16 = -24;
    int y92 = 33128;
    int dat12 = 62;
    int prev13 = 37;
    int tmp3 = 10346;
    int a79 = 50;
    int i;
    for (i = 0; i < 6; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        prev13 = b37 + dat12;
        b16 = b37 - b16;
        prev13 = b16;
        a79 = tmp3 + dat12;
        tmp3 = y92;
        a79 = dat12;
        y92 = y92 + a79;
        a79 = b37 + tmp3;
        b37 = b16 - prev13;
        tmp3 = dat12 + tmp3;
        tmp3 = tmp3 + 5;
        }
    }
}
int main() { test_func(); return 0; }

