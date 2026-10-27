// RTPG_1570: vars=10 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int z4 = 20051;
    int val62 = 61;
    int cnt35 = -41;
    int dat89 = 7;
    int acc0 = 17;
    int tmp85 = -19;
    int lo65 = 49105;
    int z92 = 8766;
    int cur19 = 9;
    int dat63 = 8;
    int *ptr = &tmp85;
    int i;
    for (i = 0; i < 32; i++) {
        val62 = xn[i];
        z92 = cur19 + 2;
        z92 = dat63;
        tmp85 = tmp85 - z92;
        dat63 = val62 + cnt35;
        val62 = z4;
        *ptr = *ptr + 1;
        yo[i] = dat89;
    }
}
int main() { test_func(); return 0; }

