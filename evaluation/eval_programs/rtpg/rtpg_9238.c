// RTPG_9238: vars=5 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int c64 = 62786;
    int z54 = -32;
    int hi47 = 31038;
    int val25 = 29692;
    int b26 = 91;
    int i;
    for (i = 0; i < 16; i++) {
        b26 = xn[i];
        hi47 = z54 / hi47;
        c64 = b26 | val25;
        b26 = b26 + b26;
        yo[i] = z54;
    }
}
int main() { test_func(); return 0; }

