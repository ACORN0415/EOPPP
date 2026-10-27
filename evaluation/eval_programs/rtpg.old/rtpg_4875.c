// RTPG_4875: vars=4 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int b5 = 9;
    int c36 = 63928;
    int v0 = 1;
    int val59 = 49;
    int i;
    for (i = 0; i < 64; i++) {
        b5 = xn[i];
        c36 = b5 - 53646;
        b5 = b5 - 56822;
        yo[i] = v0;
    }
}
int main() { test_func(); return 0; }

