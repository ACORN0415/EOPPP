// RTPG_9234: vars=9 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int acc88 = 16;
    int x60 = 46957;
    int a77 = -1;
    int acc4 = 72;
    int v86 = 21;
    int c84 = -22;
    int val43 = -25;
    int y33 = 8;
    int tmp87 = 31;
    int i;
    for (i = 0; i < 16; i++) {
        c84 = xn[i];
        acc88 = val43;
        tmp87 = tmp87 + 2;
        tmp87 = tmp87 + 5;
        y33 = val43 - 14;
        acc4 = c84;
        acc4 = tmp87 - acc88;
        val43 = acc88 - tmp87;
        a77 = val43 + acc88;
        yo[i] = y33;
    }
}
int main() { test_func(); return 0; }

