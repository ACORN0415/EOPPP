// RTPG_1037: vars=15 stmts=5
int xn[64];
int yo[64];
void test_func(void) {
    int out43 = 9;
    int v86 = 36;
    int val82 = 6771;
    int c1 = 7099;
    int y38 = 4;
    int tmp7 = 98;
    int a37 = -33;
    int prev96 = 8;
    int out56 = -18;
    int x27 = 62514;
    int cur78 = -30;
    int val90 = 8;
    int cur33 = 19100;
    int a7 = -8;
    int y56 = -19;
    int i;
    for (i = 0; i < 64; i++) {
        out43 = xn[i];
        a37 = prev96 + x27;
        val82 = cur78 - y38;
        cur78 = cur78 - 1;
        prev96 = a37 + cur78;
        out43 = prev96 - 18;
        yo[i] = y38;
    }
}
int main() { test_func(); return 0; }

