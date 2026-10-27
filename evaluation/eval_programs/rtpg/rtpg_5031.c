// RTPG_5031: vars=5 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int z43 = 33620;
    int dat13 = 43563;
    int y78 = 0;
    int a5 = 91;
    int z50 = 97;
    int h0 = -37;
    int sv0 = 0;
    int h1 = 26153;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        z43 = xn[i];
        a5 = a5 * 9;
        y78 = z50 + a5;
        z50 = y78 * 61;
        a5 = a5 * 1;
        z50 = z50 - 5;
        a5 = dat13 * 49303;
        z43 = z43 + a5;
        yo[i] = a5;
    }
}
int main() { test_func(); return 0; }

