// RTPG_6095: vars=7 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int c38 = 73;
    int v34 = 97;
    int hi39 = 55;
    int hi96 = 10;
    int hi81 = 3266;
    int x6 = 4;
    int y10 = 31;
    int i;
    for (i = 0; i < 64; i++) {
        x6 = xn[i];
        hi81 = hi81 - 3;
        x6 = x6 + 1;
        v34 = y10 - hi39;
        x6 = x6 - 30;
        y10 = c38 + hi39;
        y10 = y10 + 5;
        y10 = y10 - 5;
        hi96 = c38 + 4;
        yo[i] = y10;
    }
}
int main() { test_func(); return 0; }

