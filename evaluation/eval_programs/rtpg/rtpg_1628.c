// RTPG_1628: vars=4 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    double val8 = 24.97;
    int cnt49 = 6;
    int a7 = 43;
    int val12 = 60483;
    int i;
    for (i = 0; i < 64; i++) {
        a7 = xn[i];
        val8 = val8 & cnt49;
        a7 = val8 % a7;
        a7 = a7 + 5;
        val12 = cnt49 - val12;
        if (val8 > 54) {
        val8 = val12;
        }
        yo[i] = val12;
    }
}
int main() { test_func(); return 0; }

