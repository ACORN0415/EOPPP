// RTPG_5663: vars=3 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int hi27 = 30;
    int res31 = 44;
    int tmp36 = 40;
    int i;
    for (i = 0; i < 64; i++) {
        res31 = xn[i];
        res31 = res31;
        tmp36 = hi27 + tmp36;
        tmp36 = hi27 - 4;
        hi27 = res31;
        res31 = res31 - 5;
        tmp36 = hi27 + hi27;
        tmp36 = tmp36;
        hi27 = tmp36 - res31;
        tmp36 = hi27;
        yo[i] = res31;
    }
}
int main() { test_func(); return 0; }

