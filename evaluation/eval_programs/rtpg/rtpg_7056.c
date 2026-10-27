// RTPG_7056: vars=8 stmts=6
enum State { BLUE, OFF, FAST };
void test_func(void) {
    int b80 = -44;
    int v99 = 2;
    int c43 = 3;
    int hi92 = 6;
    int prev71 = 72;
    int z14 = 10;
    int c8 = 9;
    int sum58 = -16;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 62; i++) {
        c43 = b80 - c8;
        z14 = prev71 + c43;
        sum58 = sum58 - 3;
        z14 = sum58 - prev71;
        v99 = v99 - v99;
        hi92 = hi92 - 4;
    }
}
int main() { test_func(); return 0; }

