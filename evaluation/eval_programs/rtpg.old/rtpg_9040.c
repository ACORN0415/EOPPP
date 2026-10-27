// RTPG_9040: vars=7 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int b19 = 2;
    int acc30 = -26;
    int out76 = 4;
    int sum54 = 3;
    int y11 = 29;
    int y69 = 9;
    int b28 = 23;
    int i;
    for (i = 0; i < 16; i++) {
        y11 = xn[i];
        y69 = y69 + 11803;
        b28 = y69;
        acc30 = b19 - y11;
        b28 = y11 - b19;
        sum54 = b28 + 60472;
        yo[i] = b19;
    }
}
int main() { test_func(); return 0; }

