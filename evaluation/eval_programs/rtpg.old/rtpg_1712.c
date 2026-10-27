// RTPG_1712: vars=7 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int out37 = 38;
    int res31 = 77;
    int y85 = 8;
    int v88 = 40;
    int prev23 = 50;
    float b88 = 41.45;
    int cnt6 = 9;
    int i;
    for (i = 0; i < 32; i++) {
        out37 = xn[i];
        v88 = prev23 + cnt6;
        v88 = v88 + 3;
        b88 = out37 - v88;
        b88 = b88 - out37;
        res31 = res31 + 4;
        prev23 = out37 - b88;
        yo[i] = b88;
    }
}
int main() { test_func(); return 0; }

