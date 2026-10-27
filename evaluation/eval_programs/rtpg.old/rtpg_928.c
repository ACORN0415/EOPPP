// RTPG_928: vars=9 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int b0 = 7;
    int cur40 = -47;
    int v37 = 7;
    int prev43 = 51396;
    int lo93 = 55325;
    int z85 = 9;
    int sum67 = 38;
    int lo87 = 1;
    int y7 = 17901;
    int i;
    for (i = 0; i < 64; i++) {
        z85 = xn[i];
        b0 = b0 + 5;
        lo87 = prev43 | v37;
        v37 = v37 + 3;
        cur40 = lo87 | cur40;
        b0 = lo93 + z85;
        prev43 = lo93 - lo87;
        sum67 = sum67 - v37;
        yo[i] = y7;
    }
}
int main() { test_func(); return 0; }

