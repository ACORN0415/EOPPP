// RTPG_4418: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int c77 = 55;
    int a40 = 5;
    int sum6 = -37;
    int a27 = 32;
    int lo3 = 8;
    int h0 = 58;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        sum6 = xn[i];
        a27 = a40;
        c77 = c77 * 33;
        a40 = a27 * 3;
        a27 = sum6 - a27;
        yo[i] = a40;
    }
}
int main() { test_func(); return 0; }

