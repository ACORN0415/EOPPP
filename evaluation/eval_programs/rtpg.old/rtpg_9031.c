// RTPG_9031: vars=5 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int val8 = 8453;
    int v27 = -7;
    int out50 = 12;
    int prev13 = 34;
    int a86 = 32065;
    int i;
    for (i = 0; i < 16; i++) {
        prev13 = xn[i];
        prev13 = out50 + 3;
        prev13 = out50 + val8;
        prev13 = prev13 + val8;
        a86 = a86 - a86;
        out50 = prev13 + a86;
        yo[i] = a86;
    }
}
int main() { test_func(); return 0; }

