// RTPG_2876: vars=10 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int a67 = 90;
    int a5 = 31616;
    int hi84 = 5185;
    int a44 = 50;
    int b72 = 96;
    int z62 = 15;
    int out68 = 2;
    int z28 = 91;
    int cur48 = 1;
    int z78 = 40737;
    int i;
    for (i = 0; i < 64; i++) {
        a44 = xn[i];
        a5 = a67 - a44;
        b72 = b72 - 5;
        a44 = a44 | a44;
        yo[i] = cur48;
    }
}
int main() { test_func(); return 0; }

