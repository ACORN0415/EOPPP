// RTPG_2131: vars=10 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int v10 = 70;
    int z69 = 5;
    int val81 = 1;
    int prev58 = 30;
    int y40 = 78;
    int a70 = 39;
    int c51 = 63;
    int val65 = 76;
    int a50 = -26;
    int y31 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        a50 = xn[i];
        y31 = y31 - 4;
        z69 = val81 - 12256;
        y40 = c51 % prev58;
        z69 = val81 - prev58;
        a70 = c51 ^ v10;
        val65 = v10 | y31;
        c51 = y40 / c51;
        v10 = y40 / prev58;
        if (val81 < 13) {
        v10 = prev58;
        }
        yo[i] = val81;
    }
}
int main() { test_func(); return 0; }

