// RTPG_7302: vars=4 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int tmp0 = 22;
    int v15 = 43466;
    int v7 = 1;
    int hi92 = -33;
    int i;
    for (i = 0; i < 64; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        hi92 = hi92 + 5;
        v15 = v15 - 3;
        v7 = v15 + v15;
        tmp0 = v7 - 1;
        }
    }
}
int main() { test_func(); return 0; }

