// RTPG_9330: vars=7 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int v2 = 1;
    int hi20 = 19397;
    int prev24 = 7;
    int prev71 = 57269;
    int val65 = 1;
    int z10 = 48140;
    int val96 = 27;
    int i;
    for (i = 0; i < 32; i++) {
        val65 = xn[i];
        z10 = z10 + 5;
        hi20 = z10;
        v2 = val96;
        val96 = v2;
        yo[i] = v2;
    }
}
int main() { test_func(); return 0; }

