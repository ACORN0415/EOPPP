// RTPG_6309: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int prev35 = 36072;
    int hi85 = 80;
    int hi88 = 1497;
    int c76 = 44;
    int c22 = 48;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 62053;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        c76 = xn[i];
        hi88 = c76 + 19;
        c22 = c22 - 2;
        hi85 = c76 + -7;
        hi88 = c76 ^ hi85;
        c76 = c76 - 35334;
        yo[i] = hi85;
    }
}
int main() { test_func(); return 0; }

