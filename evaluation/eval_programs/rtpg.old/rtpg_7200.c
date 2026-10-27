// RTPG_7200: vars=4 stmts=12
int xn[64];
int yo[64];
void test_func(void) {
    int x13 = -20;
    int a99 = 1;
    int val20 = 6;
    int y44 = -31;
    int i;
    for (i = 0; i < 64; i++) {
        y44 = xn[i];
        y44 = y44 - 1;
        a99 = a99 + 1;
        y44 = val20 - y44;
        val20 = val20 + x13;
        y44 = a99 - 5;
        y44 = y44 + 6;
        x13 = y44 - 39;
        val20 = val20 + 5;
        y44 = a99;
        a99 = y44;
        val20 = x13 - 5;
        val20 = val20 - 0;
        yo[i] = a99;
    }
}
int main() { test_func(); return 0; }

