// RTPG_5599: vars=8 stmts=3
enum State { FAST, ON, SLOW };
void test_func(void) {
    int res46 = 49021;
    int a45 = 6;
    int x29 = 12819;
    int y62 = -43;
    int sum50 = 20;
    int c40 = 32;
    int c22 = -9;
    int val31 = 58300;
    enum State st = FAST;
    int i;
    for (i = 0; i < 52; i++) {
        x29 = res46;
        res46 = sum50 - y62;
        res46 = y62 + c40;
    }
}
int main() { test_func(); return 0; }

