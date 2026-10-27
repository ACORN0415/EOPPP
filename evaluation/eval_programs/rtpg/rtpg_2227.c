// RTPG_2227: vars=3 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int y98 = 42;
    int v27 = 55411;
    int dat84 = 7856;
    int i;
    for (i = 0; i < 16; i++) {
        y98 = xn[i];
        dat84 = v27;
        dat84 = dat84 + 32;
        y98 = v27 + dat84;
        yo[i] = v27;
    }
}
int main() { test_func(); return 0; }

