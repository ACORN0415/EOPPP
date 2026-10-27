// RTPG_1773: vars=5 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int x2 = 47259;
    int x56 = -34;
    int x39 = 49;
    int b83 = 58;
    int y99 = 84;
    int i;
    for (i = 0; i < 16; i++) {
        x2 = xn[i];
        x39 = x2 - 0;
        x39 = b83 - x2;
        yo[i] = y99;
    }
}
int main() { test_func(); return 0; }

