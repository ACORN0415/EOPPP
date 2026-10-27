// RTPG_7129: vars=10 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int sum67 = 40;
    int lo88 = 90;
    int b83 = 21;
    int hi92 = 59;
    int v46 = 22419;
    int z82 = 5934;
    int z96 = 42860;
    int y67 = 27;
    int prev5 = -43;
    int out61 = 25;
    int i;
    for (i = 0; i < 32; i++) {
        lo88 = xn[i];
        hi92 = z96;
        z96 = y67 + sum67;
        out61 = hi92;
        if (y67 > 85) {
        sum67 = out61;
        }
        yo[i] = sum67;
    }
}
int main() { test_func(); return 0; }

