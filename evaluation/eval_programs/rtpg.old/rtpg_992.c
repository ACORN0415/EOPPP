// RTPG_992: vars=5 stmts=8
enum State { BLUE, SLOW, FAST };
void test_func(void) {
    int b9 = 7;
    int val21 = -31;
    int v4 = -40;
    int prev79 = 1;
    int acc50 = -46;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 16; i++) {
        v4 = prev79;
        val21 = b9;
        v4 = v4 + 4;
        b9 = v4 - 2;
        v4 = b9 + b9;
        prev79 = val21;
        b9 = b9 + v4;
        v4 = b9;
        if (prev79 < -49) {
        val21 = val21;
        }
    }
}
int main() { test_func(); return 0; }

