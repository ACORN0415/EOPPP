// RTPG_2804: vars=8 stmts=6
void test_func(void) {
    int y0 = 53617;
    int x0 = 18;
    int c21 = 3;
    int prev71 = 41451;
    int a58 = 3;
    int tmp10 = 29;
    int dat58 = 68;
    int y80 = 23685;
    int i;
    for (i = 0; i < 19; i++) {
        a58 = dat58 ^ c21;
        c21 = y80 - prev71;
        tmp10 = y80;
        x0 = y80 - x0;
        c21 = dat58 - a58;
        y80 = dat58 / c21;
    }
}
int main() { test_func(); return 0; }

