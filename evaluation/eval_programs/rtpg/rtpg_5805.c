// RTPG_5805: vars=8 stmts=11
enum State { SLOW, FAST, OFF };
void test_func(void) {
    int z99 = 1;
    int hi54 = 43;
    int cnt61 = 1;
    int z17 = 9;
    int tmp58 = -32;
    int out61 = 96;
    int z85 = 92;
    int lo92 = 2;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 6; i++) {
        out61 = out61 - 3;
        out61 = z85 - z17;
        z85 = z85 + 4;
        lo92 = lo92 + 38580;
        cnt61 = z99 - 35;
        z85 = z85 + 5;
        cnt61 = z85 - z99;
        lo92 = hi54;
        cnt61 = cnt61 - 4;
        lo92 = lo92 + 2;
        z17 = z99 - out61;
    }
}
int main() { test_func(); return 0; }

