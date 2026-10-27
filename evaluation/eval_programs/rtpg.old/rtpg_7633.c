// RTPG_7633: vars=8 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int a49 = 4;
    int b0 = 2;
    int hi44 = 10;
    int cur91 = 75;
    int cur87 = 12393;
    int val41 = 2;
    int acc67 = 6;
    int x23 = 74;
    int i;
    for (i = 0; i < 32; i++) {
        b0 = xn[i];
        b0 = acc67 + cur91;
        hi44 = x23 + a49;
        acc67 = acc67 - 0;
        x23 = a49 + cur87;
        a49 = cur87 + x23;
        b0 = hi44 ^ cur87;
        yo[i] = a49;
    }
}
int main() { test_func(); return 0; }

