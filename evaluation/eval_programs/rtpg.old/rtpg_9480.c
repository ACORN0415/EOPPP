// RTPG_9480: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int val96 = 47;
    int hi27 = 27;
    int z28 = 92;
    int val41 = 17;
    int v97 = 13227;
    int *ptr = &z28;
    int i;
    for (i = 0; i < 16; i++) {
        z28 = xn[i];
        val96 = val41 + val96;
        v97 = val96 + -46;
        z28 = z28 % z28;
        v97 = val96 & z28;
        hi27 = z28 / v97;
        *ptr = *ptr + 4;
        yo[i] = val96;
    }
}
int main() { test_func(); return 0; }

