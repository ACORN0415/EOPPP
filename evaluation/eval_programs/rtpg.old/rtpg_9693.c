// RTPG_9693: vars=9 stmts=5
int xn[32];
int yo[32];
void test_func(void) {
    int x57 = 47211;
    int res71 = 7;
    int cur17 = 51;
    int cur49 = 1;
    int tmp63 = 49913;
    int prev54 = 34;
    int c5 = 36386;
    int lo20 = 40623;
    int b60 = 49;
    int i;
    for (i = 0; i < 32; i++) {
        cur17 = xn[i];
        c5 = c5 + cur49;
        tmp63 = lo20 - 38;
        x57 = b60 - x57;
        prev54 = lo20 - lo20;
        cur17 = cur17 + 4;
        if (c5 < 92) {
        x57 = x57 - b60;
        }
        yo[i] = cur17;
    }
}
int main() { test_func(); return 0; }

