// RTPG_4181: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int val98 = -4;
    int v10 = 2618;
    int cur38 = 74;
    int hi91 = 14;
    double res62 = 16.79;
    int dat90 = -17;
    int h0 = 6;
    int sv0 = 0;
    int h1 = -29;
    int sv1 = 0;
    int h2 = 25;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        cur38 = xn[i];
        hi91 = hi91 + 4;
        hi91 = hi91 - 2;
        cur38 = v10;
        val98 = hi91 ^ val98;
        if (v10 <= 45) {
        hi91 = hi91 - 1;
        }
        yo[i] = hi91;
    }
}
int main() { test_func(); return 0; }

