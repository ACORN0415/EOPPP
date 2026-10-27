// RTPG_7231: vars=5 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int out14 = 3;
    int b92 = 7;
    int cnt11 = 17;
    int b73 = 0;
    int out32 = 21;
    int i;
    for (i = 0; i < 64; i++) {
        out32 = xn[i];
        out32 = out32 - 54;
        out14 = out14 + 1;
        cnt11 = out14 + 10;
        b92 = b73 - b92;
        yo[i] = b73;
    }
}
int main() { test_func(); return 0; }

