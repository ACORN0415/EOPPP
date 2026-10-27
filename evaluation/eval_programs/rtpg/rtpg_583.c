// RTPG_583: vars=8 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    float c60 = 91.32;
    int out72 = 1;
    int b38 = 9;
    int x10 = 49657;
    int acc32 = 41235;
    double lo28 = 44.82;
    float tmp83 = 27.53;
    int cnt15 = 58042;
    int i;
    for (i = 0; i < 64; i++) {
        cnt15 = xn[i];
        out72 = out72 + 3;
        acc32 = acc32 + x10;
        b38 = b38;
        c60 = lo28 - out72;
        c60 = c60 - 2;
        cnt15 = cnt15 - 4;
        yo[i] = tmp83;
    }
}
int main() { test_func(); return 0; }

