// RTPG_96: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int val93 = 48555;
    int acc57 = 47;
    int z72 = 22;
    int *ptr = &acc57;
    int i;
    for (i = 0; i < 64; i++) {
        acc57 = xn[i];
        acc57 = acc57;
        acc57 = acc57 + val93;
        *ptr = *ptr + 4;
        if (val93 > 50) goto done;
        yo[i] = acc57;
    }
done:
    acc57 = 0;
}
int main() { test_func(); return 0; }

