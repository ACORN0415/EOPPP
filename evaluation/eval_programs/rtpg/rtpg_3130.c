// RTPG_3130: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int val89 = 15;
    int cur98 = 56;
    int hi67 = 1;
    int hi93 = 2;
    int i;
    for (i = 0; i < 32; i++) {
        hi67 = xn[i];
        hi93 = val89;
        val89 = val89 - 5;
        val89 = hi67 + hi67;
        hi93 = cur98 + val89;
        hi67 = hi67 + 2;
        yo[i] = cur98;
    }
}
int main() { test_func(); return 0; }

