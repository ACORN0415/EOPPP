// RTPG_593: vars=8 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    float c60 = 91.32;
    int acc32 = 1;
    int b38 = 9;
    int cnt15 = 49657;
    int x10 = 41235;
    double tmp83 = 44.82;
    float lo28 = 27.53;
    int out72 = 58042;
    int i;
    for (i = 0; i < 64; i++) {
        out72 = xn[i];
        acc32 = acc32 + 3;
        x10 = x10 + cnt15;
        b38 = b38;
        c60 = tmp83 - acc32;
        c60 = c60 - 2;
        out72 = out72 - 4;
        yo[i] = lo28;
    }
}
int main() { test_func(); return 0; }

