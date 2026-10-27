// RTPG_9799: vars=10 stmts=9
int xn[32];
int yo[32];
void test_func(void) {
    int dat80 = -48;
    int c64 = 28212;
    int hi57 = 30650;
    int hi64 = 31;
    int b1 = 35;
    int tmp78 = 60466;
    int b92 = 0;
    int val18 = 3;
    int dat55 = 10;
    int sum98 = 1;
    int h0 = 16;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int h2 = 44025;
    int sv2 = 0;
    int h3 = 10;
    int sv3 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        val18 = xn[i];
        val18 = val18 + 3;
        val18 = hi57;
        dat55 = dat55 * 33;
        hi64 = b92 + sum98;
        tmp78 = c64 + hi64;
        val18 = hi64 + b1;
        dat55 = sum98 - sum98;
        hi64 = val18 * 3;
        val18 = sum98 * 25;
        yo[i] = sum98;
    }
}
int main() { test_func(); return 0; }

