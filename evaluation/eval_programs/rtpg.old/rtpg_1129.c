// RTPG_1129: vars=7 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int v26 = -13;
    int a67 = 10;
    int cnt61 = 8;
    int prev53 = 3;
    int b74 = 5;
    int out79 = 8;
    int b88 = -36;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 14;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        a67 = xn[i];
        out79 = out79 + 5;
        a67 = cnt61 + -6;
        out79 = prev53 | out79;
        v26 = v26 - 31;
        b88 = cnt61;
        cnt61 = a67 + out79;
        v26 = out79 - prev53;
        if (out79 != 1) {
        a67 = out79 + 32;
        }
        yo[i] = b74;
    }
}
int main() { test_func(); return 0; }

