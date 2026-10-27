// RTPG_3156: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int v84 = 9;
    int z62 = 10;
    int sum45 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v84 = xn[i];
        sum45 = sum45 + 3;
        z62 = z62 - 2;
        z62 = v84 + z62;
        z62 = z62 - 4;
        z62 = z62 - sum45;
        sum45 = z62 + z62;
        sum45 = z62 - 1690;
        if (sum45 > 95) {
        v84 = v84 + 5;
        }
        yo[i] = v84;
    }
}
int main() { test_func(); return 0; }

