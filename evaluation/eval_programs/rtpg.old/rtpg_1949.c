// RTPG_1949: vars=7 stmts=6
int xn[32];
int yo[32];
void test_func(void) {
    int cur1 = 53555;
    int hi91 = 40;
    int a18 = 5362;
    int v28 = 28;
    int x67 = 46952;
    int a73 = 35;
    int y57 = 83;
    int i;
    for (i = 0; i < 32; i++) {
        a73 = xn[i];
        hi91 = y57;
        y57 = x67 + hi91;
        x67 = hi91;
        a73 = y57 - v28;
        a73 = y57 - 93;
        a73 = y57 - cur1;
        yo[i] = y57;
    }
}
int main() { test_func(); return 0; }

