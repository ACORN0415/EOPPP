// RTPG_5735: vars=5 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int res80 = 17;
    int tmp46 = 8;
    int lo33 = 0;
    int cur75 = 28;
    int res39 = -13;
    int i;
    for (i = 0; i < 64; i++) {
        res39 = xn[i];
        cur75 = cur75 - 1;
        lo33 = res39 - lo33;
        res39 = res39 + 5;
        cur75 = res39 - 0;
        res39 = lo33 + 83;
        yo[i] = lo33;
    }
}
int main() { test_func(); return 0; }

