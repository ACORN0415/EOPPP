// RTPG_90: vars=3 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int hi92 = 51127;
    double c41 = 5.93;
    double z31 = 27.60;
    int h0 = -14;
    int sv0 = 0;
    int h1 = -9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        hi92 = xn[i];
        z31 = z31 + 42;
        hi92 = z31 - c41;
        c41 = hi92 - 59;
        z31 = c41 * 27;
        c41 = c41 * 7;
        yo[i] = hi92;
    }
}
int main() { test_func(); return 0; }

