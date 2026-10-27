// RTPG_9117: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int hi87 = 0;
    int acc69 = 6;
    int out51 = 38;
    int c36 = -22;
    int h0 = 10;
    int sv0 = 0;
    int h1 = 57;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        hi87 = xn[i];
        c36 = out51;
        hi87 = out51 - 10;
        hi87 = hi87 - 4;
        hi87 = hi87 * 42;
        hi87 = hi87 + 1;
        if (out51 > -16) {
        out51 = c36 - 8;
        }
        yo[i] = hi87;
    }
}
int main() { test_func(); return 0; }

