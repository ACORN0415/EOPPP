// RTPG_149: vars=5 stmts=4
int xn[16];
int yo[16];
int idx_arr[16];
void test_func(void) {
    int z75 = 6132;
    int c17 = 60478;
    int c38 = 42;
    int out79 = 6;
    int lo11 = 17;
    int i;
    for (i = 0; i < 16; i++) {
        c17 = xn[i];
        lo11 = xn[idx_arr[i]];
        c38 = z75 - c17;
        c17 = out79;
        z75 = out79 % c17;
        z75 = c17 / lo11;
        yo[i] = lo11;
    }
}
int main() { test_func(); return 0; }

