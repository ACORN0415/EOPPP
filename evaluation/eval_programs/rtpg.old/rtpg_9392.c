// RTPG_9392: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int dat82 = 99;
    int hi17 = 56239;
    int acc54 = 0;
    int dat85 = -26;
    int i;
    for (i = 0; i < 64; i++) {
        acc54 = xn[i];
        dat82 = dat82 - 3;
        dat82 = hi17 - 4;
        acc54 = hi17 + hi17;
        if (dat82 < 8) {
        dat82 = acc54;
        }
        yo[i] = dat85;
    }
}
int main() { test_func(); return 0; }

