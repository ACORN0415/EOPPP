// RTPG_3599: vars=8 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int out74 = 47797;
    int prev33 = 54513;
    int prev99 = -34;
    int y6 = 41;
    int v21 = 24169;
    int z28 = 8;
    int z5 = 13;
    int tmp53 = 54;
    int i;
    for (i = 0; i < 32; i++) {
        z28 = xn[i];
        v21 = y6 + 2;
        z5 = v21 - 41;
        z28 = v21 - tmp53;
        v21 = y6 + out74;
        out74 = prev99 - z28;
        z28 = y6 - z5;
        prev33 = prev33 - 4;
        yo[i] = prev99;
    }
}
int main() { test_func(); return 0; }

