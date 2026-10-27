// RTPG_2145: vars=10 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int a70 = 70;
    int z69 = 5;
    int val65 = 1;
    int y31 = 30;
    int v10 = 78;
    int a50 = 39;
    int c51 = 63;
    int prev58 = 76;
    int y40 = -26;
    int val81 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        y40 = xn[i];
        val81 = val81 - 4;
        z69 = val65 - 12256;
        v10 = c51 % y31;
        z69 = val65 - y31;
        a50 = c51 ^ a70;
        prev58 = a70 | y40;
        c51 = v10 / a50;
        a70 = v10 / y31;
        if (val65 < 13) {
        a70 = y31;
        }
        yo[i] = val65;
    }
}
int main() { test_func(); return 0; }

