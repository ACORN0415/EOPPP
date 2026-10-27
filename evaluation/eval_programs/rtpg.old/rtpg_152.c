// RTPG_152: vars=10 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int hi57 = -35;
    int cnt1 = 0;
    int hi51 = 5;
    int c47 = 2;
    int out31 = 0;
    int lo90 = 61134;
    int v41 = 93;
    int out94 = 30;
    int out65 = 9;
    int b75 = 67;
    int i;
    for (i = 0; i < 64; i++) {
        hi51 = xn[i];
        out65 = hi51 - hi57;
        v41 = hi51;
        hi51 = hi57;
        yo[i] = lo90;
    }
}
int main() { test_func(); return 0; }

