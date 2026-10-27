// RTPG_2833: vars=3 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int val98 = 5;
    double sum69 = 45.96;
    float sum7 = 27.02;
    int h0 = -41;
    int sv0 = 0;
    int h1 = -5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        sum7 = xn[i];
        val98 = sum7 + 7;
        sum69 = val98 + sum69;
        sum69 = val98;
        val98 = val98 + 1;
        sum69 = sum7 * 77;
        sum69 = sum7;
        val98 = sum7 * 7;
        val98 = val98 + 3;
        val98 = val98 * 4;
        sum7 = sum69 * 1;
        sum7 = val98 * 7;
        yo[i] = sum69;
    }
}
int main() { test_func(); return 0; }

