// RTPG_31: vars=5 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int res13 = 66;
    int c52 = -2;
    int x33 = 5;
    int res37 = 8855;
    int out9 = 29;
    int i;
    for (i = 0; i < 64; i++) {
        res37 = xn[i];
        x33 = x33 + 3;
        c52 = res13;
        res37 = res13;
        out9 = res37 - -23;
        c52 = c52 + out9;
        x33 = c52 + 3;
        res13 = res37 + out9;
        res13 = x33 - out9;
        if (out9 <= 75) {
        c52 = c52 - 4;
        }
        yo[i] = c52;
    }
}
int main() { test_func(); return 0; }

