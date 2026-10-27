// RTPG_6636: vars=4 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int cur7 = -49;
    int tmp63 = 6021;
    int val62 = 7;
    int hi9 = -9;
    int h0 = 39827;
    int sv0 = 0;
    int h1 = -6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        val62 = xn[i];
        hi9 = tmp63;
        val62 = cur7 | tmp63;
        val62 = cur7;
        val62 = cur7 + 0;
        val62 = val62 * 9;
        if (hi9 == 61) {
        tmp63 = tmp63 + val62;
        }
        yo[i] = hi9;
    }
}
int main() { test_func(); return 0; }

