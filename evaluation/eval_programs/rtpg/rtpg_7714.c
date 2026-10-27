// RTPG_7714: vars=8 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int cur87 = 4;
    int b0 = 2;
    int acc67 = 10;
    int x23 = 75;
    int a49 = 12393;
    int hi44 = 2;
    int val41 = 6;
    int cur91 = 74;
    int i;
    for (i = 0; i < 32; i++) {
        b0 = xn[i];
        b0 = val41 + x23;
        acc67 = cur91 + cur87;
        val41 = val41 - 0;
        cur91 = cur87 + a49;
        cur87 = a49 + cur91;
        b0 = acc67 ^ x23;
        yo[i] = cur87;
    }
}
int main() { test_func(); return 0; }

