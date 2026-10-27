// RTPG_3263: vars=5 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int v30 = 7357;
    int acc23 = 34900;
    int res16 = 57307;
    int val57 = 10;
    int z92 = 16;
    int *ptr = &v30;
    int i;
    for (i = 0; i < 64; i++) {
        val57 = xn[i];
        z92 = v30 + acc23;
        v30 = res16 - 13;
        acc23 = v30 - val57;
        *ptr = *ptr + 1;
        yo[i] = z92;
    }
}
int main() { test_func(); return 0; }

