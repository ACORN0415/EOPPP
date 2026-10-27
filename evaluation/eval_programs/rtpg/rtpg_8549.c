// RTPG_8549: vars=15 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int res81 = 2118;
    int b81 = 848;
    int c54 = 40822;
    int b66 = 20;
    int c94 = 28187;
    int hi28 = 13;
    int v96 = 9001;
    int cur10 = 45;
    int hi0 = 39;
    int lo99 = 0;
    int a71 = 43;
    int v70 = -50;
    int lo65 = 1310;
    int acc31 = 35623;
    int v65 = 1;
    int i;
    for (i = 0; i < 32; i++) {
        lo99 = xn[i];
        res81 = res81 + 1;
        b66 = v65 + acc31;
        hi0 = a71 + v70;
        a71 = a71 - 3;
        yo[i] = v70;
    }
}
int main() { test_func(); return 0; }

