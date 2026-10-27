// RTPG_8359: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int val76 = 21;
    int v37 = 33;
    int z50 = 13;
    int v4 = 6;
    int c69 = 33;
    int cur87 = 6;
    int h0 = -1;
    int sv0 = 0;
    int h1 = -33;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        c69 = xn[i];
        v4 = c69 * 92;
        cur87 = z50 - 5;
        v37 = v37 - v4;
        v37 = c69 + cur87;
        yo[i] = c69;
    }
}
int main() { test_func(); return 0; }

