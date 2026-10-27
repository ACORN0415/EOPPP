// RTPG_451: vars=9 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int hi68 = 53913;
    int a69 = 13125;
    int prev86 = -10;
    int y71 = -38;
    int out82 = 25740;
    int acc14 = 9;
    int hi25 = 46295;
    int val65 = 14;
    int z10 = -42;
    int i;
    for (i = 0; i < 16; i++) {
        out82 = xn[i];
        hi68 = y71 - 8;
        y71 = y71 + 3;
        val65 = hi68 + out82;
        hi25 = hi25 + 20;
        y71 = hi25 + prev86;
        hi68 = hi68 - 2;
        prev86 = prev86 + val65;
        yo[i] = hi68;
    }
}
int main() { test_func(); return 0; }

