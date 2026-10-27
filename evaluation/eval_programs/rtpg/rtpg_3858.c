// RTPG_3858: vars=8 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int dat45 = 28;
    int hi41 = 69;
    int res95 = 83;
    int y15 = 81;
    int out55 = 18;
    int prev93 = 30;
    int y49 = -24;
    int b58 = 7;
    int i;
    for (i = 0; i < 64; i++) {
        b58 = xn[i];
        prev93 = prev93 + 2;
        y15 = b58 + y15;
        hi41 = prev93;
        yo[i] = y15;
    }
}
int main() { test_func(); return 0; }

