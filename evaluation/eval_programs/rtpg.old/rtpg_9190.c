// RTPG_9190: vars=4 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int dat72 = -4;
    int hi66 = -36;
    int out36 = 10;
    int b49 = 12;
    int i;
    for (i = 0; i < 32; i++) {
        dat72 = xn[i];
        dat72 = dat72 - 54422;
        out36 = out36 + 4;
        out36 = out36 + 1;
        hi66 = hi66 + 5;
        hi66 = out36 - b49;
        if (out36 < 0) {
        out36 = hi66 - 29;
        }
        yo[i] = hi66;
    }
}
int main() { test_func(); return 0; }

