// RTPG_5512: vars=8 stmts=3
enum State { FAST, ON, SLOW };
void test_func(void) {
    int val31 = 49021;
    int a45 = 6;
    int c40 = 12819;
    int y62 = -43;
    int c22 = 20;
    int res46 = 32;
    int sum50 = -9;
    int x29 = 58300;
    enum State st = FAST;
    int i;
    for (i = 0; i < 52; i++) {
        c40 = val31;
        val31 = c22 - y62;
        val31 = y62 + res46;
    }
}
int main() { test_func(); return 0; }

