// RTPG_3851: vars=5 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int z56 = 45098;
    int x77 = 15627;
    int a79 = 31;
    int hi46 = 1772;
    int out19 = 7;
    int i;
    for (i = 0; i < 16; i++) {
        out19 = xn[i];
        a79 = a79 - 5;
        a79 = z56 % out19;
        z56 = hi46 + out19;
        x77 = a79 | x77;
        a79 = a79 | hi46;
        out19 = a79 - x77;
        z56 = out19;
        hi46 = out19 - 81;
        x77 = hi46 + hi46;
        out19 = a79 + 54107;
        yo[i] = z56;
    }
}
int main() { test_func(); return 0; }

