// RTPG_2369: vars=6 stmts=9
int xn[64];
int yo[64];
void test_func(void) {
    int z36 = 0;
    int res57 = 42;
    int prev37 = 1;
    int dat70 = 28403;
    int tmp57 = 7;
    int dat72 = 1;
    int h0 = 41;
    int sv0 = 0;
    int h1 = 52078;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat70 = xn[i];
        tmp57 = prev37 + tmp57;
        dat72 = dat72 + 4;
        prev37 = prev37 * 2;
        prev37 = prev37 * 26;
        res57 = dat70;
        dat70 = dat72 * 28158;
        dat72 = z36;
        dat70 = tmp57 * 81;
        dat72 = res57 + 64716;
        yo[i] = dat72;
    }
}
int main() { test_func(); return 0; }

