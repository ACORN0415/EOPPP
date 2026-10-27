// RTPG_2756: vars=6 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int c86 = 25;
    int dat42 = 25;
    int v49 = 6854;
    int z26 = -44;
    int z77 = 89;
    int val27 = 27;
    int i;
    for (i = 0; i < 64; i++) {
        v49 = xn[i];
        c86 = z26;
        c86 = z26;
        z26 = c86 - 5;
        v49 = v49 + 2;
        yo[i] = dat42;
    }
}
int main() { test_func(); return 0; }

