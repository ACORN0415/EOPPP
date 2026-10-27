// RTPG_1012: vars=6 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int val64 = 80;
    int prev90 = 3;
    int tmp73 = 49;
    int out11 = 89;
    int b41 = 10;
    int y29 = 16771;
    int i;
    for (i = 0; i < 64; i++) {
        val64 = xn[i];
        y29 = y29 + 5;
        out11 = val64 - 4;
        b41 = tmp73 - prev90;
        yo[i] = b41;
    }
done:
    b41 = 0;
}
int main() { test_func(); return 0; }

