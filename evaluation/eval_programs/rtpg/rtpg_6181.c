// RTPG_6181: vars=12 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int tmp62 = 26953;
    int z69 = 43;
    int tmp75 = -33;
    int res24 = 2;
    int c96 = 51668;
    int hi37 = 55;
    int sum88 = 7718;
    int cnt90 = 22;
    int out39 = 0;
    int val70 = 95;
    int prev20 = 13;
    int out2 = 68;
    int i;
    for (i = 0; i < 64; i++) {
        out2 = xn[i];
        tmp62 = tmp62 + 3;
        tmp75 = z69 + 61;
        val70 = val70 + 2;
        z69 = prev20 + val70;
        if (prev20 <= 2) {
        prev20 = prev20 - 4;
        }
        yo[i] = tmp62;
    }
}
int main() { test_func(); return 0; }

