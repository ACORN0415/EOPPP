// RTPG_7736: vars=9 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int acc16 = 37899;
    int val71 = 5759;
    int acc55 = 47;
    int cur26 = 4;
    int hi49 = 9;
    int a17 = 4;
    int res6 = 1;
    int cur68 = 26354;
    int prev2 = 60002;
    int i;
    for (i = 0; i < 64; i++) {
        cur68 = xn[i];
        cur26 = cur26 + 3;
        hi49 = hi49 - 5;
        res6 = val71 - 5;
        acc55 = a17 - 18888;
        acc55 = acc16 + -3;
        cur26 = hi49 - prev2;
        val71 = prev2 + hi49;
        acc16 = a17 + acc55;
        yo[i] = val71;
    }
}
int main() { test_func(); return 0; }

