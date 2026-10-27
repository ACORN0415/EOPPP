// RTPG_5574: vars=7 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int sum43 = 28926;
    int val31 = 33947;
    int tmp6 = 9;
    int hi27 = 9967;
    int res31 = 4;
    int y0 = 50;
    int tmp36 = 8;
    int i;
    for (i = 0; i < 64; i++) {
        sum43 = xn[i];
        res31 = y0;
        val31 = res31 - tmp36;
        tmp6 = tmp6 - 2;
        hi27 = hi27 - 5;
        hi27 = y0 - res31;
        tmp6 = tmp6 - 5;
        res31 = hi27 + tmp6;
        tmp6 = tmp6 - 1;
        sum43 = y0 + hi27;
        yo[i] = y0;
    }
}
int main() { test_func(); return 0; }

