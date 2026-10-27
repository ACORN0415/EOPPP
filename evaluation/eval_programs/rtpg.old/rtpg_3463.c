// RTPG_3463: vars=3 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int prev68 = 77;
    int val58 = -28;
    int lo33 = 23;
    int i;
    for (i = 0; i < 16; i++) {
        lo33 = xn[i];
        prev68 = prev68 & val58;
        prev68 = lo33 ^ prev68;
        yo[i] = prev68;
    }
}
int main() { test_func(); return 0; }

