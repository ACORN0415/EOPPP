// RTPG_1180: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int prev50 = 7;
    int dat55 = 29715;
    int c90 = -40;
    int y1 = 54;
    int z27 = 55908;
    int i;
    for (i = 0; i < 64; i++) {
        c90 = xn[i];
        dat55 = dat55 - 3;
        z27 = c90 + dat55;
        z27 = z27 & prev50;
        c90 = dat55 | prev50;
        if (z27 > 29) {
        prev50 = prev50 + 1;
        }
        yo[i] = c90;
    }
}
int main() { test_func(); return 0; }

