// RTPG_2502: vars=6 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int y72 = 90;
    int x55 = 23;
    int z18 = 35364;
    int val56 = 5;
    int y84 = 30790;
    int c35 = 63862;
    int i;
    for (i = 0; i < 32; i++) {
        z18 = xn[i];
        y72 = val56 - y72;
        x55 = y84 ^ y72;
        y72 = x55 - c35;
        y72 = y72 - x55;
        c35 = c35 | y72;
        c35 = y72;
        val56 = val56 - 4;
        z18 = val56 | y72;
        yo[i] = val56;
    }
}
int main() { test_func(); return 0; }

