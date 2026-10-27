// RTPG_2573: vars=6 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int y63 = 10;
    int x0 = 9;
    int acc32 = 4;
    int hi12 = 28;
    int z3 = 4;
    int tmp44 = 3;
    int i;
    for (i = 0; i < 16; i++) {
        tmp44 = xn[i];
        y63 = y63 - 5;
        tmp44 = hi12 - x0;
        yo[i] = acc32;
    }
}
int main() { test_func(); return 0; }

