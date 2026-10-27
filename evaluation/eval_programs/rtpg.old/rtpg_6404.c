// RTPG_6404: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int out10 = 2;
    int z65 = 42922;
    int hi99 = -27;
    int i;
    for (i = 0; i < 64; i++) {
        out10 = xn[i];
        z65 = z65 | out10;
        hi99 = hi99 + 8;
        if (z65 != -17) {
        out10 = out10 - 3;
        }
        yo[i] = hi99;
    }
}
int main() { test_func(); return 0; }

