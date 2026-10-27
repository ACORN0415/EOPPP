// RTPG_7325: vars=9 stmts=8
void test_func(void) {
    int v2 = 66;
    int hi2 = 76;
    int tmp75 = 24;
    int tmp76 = 71;
    int z0 = 40;
    int sum15 = 54;
    int v95 = 6;
    int lo15 = 58406;
    int hi3 = 33948;
    int i;
    for (i = 0; i < 21; i++) {
        hi3 = v95;
        v2 = v2 - 1;
        tmp76 = v2 | hi2;
        tmp75 = hi2;
        tmp75 = hi3;
        hi2 = hi2 - 2;
        v95 = sum15 & tmp75;
        hi3 = z0 ^ tmp75;
    }
}
int main() { test_func(); return 0; }

