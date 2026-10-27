// RTPG_2187: vars=8 stmts=12
int xn[16];
int yo[16];
void test_func(void) {
    int acc93 = 15;
    int z95 = 8;
    int tmp10 = 24841;
    int sum60 = 54094;
    int val37 = 48304;
    int y11 = 46938;
    int sum90 = 34253;
    int hi19 = 12245;
    int i;
    for (i = 0; i < 16; i++) {
        val37 = xn[i];
        acc93 = tmp10;
        sum90 = sum90 + 2;
        y11 = y11 + 2;
        hi19 = tmp10 + 43818;
        z95 = z95 + 4;
        y11 = sum90;
        sum90 = z95 + -35;
        tmp10 = sum60;
        hi19 = hi19 - 46;
        sum60 = z95;
        z95 = tmp10 + val37;
        acc93 = acc93 + 3;
        if (acc93 <= -42) {
        val37 = val37 + 5;
        }
        yo[i] = tmp10;
    }
}
int main() { test_func(); return 0; }

