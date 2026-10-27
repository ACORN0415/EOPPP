// RTPG_7252: vars=5 stmts=3
enum State { FAST, BLUE, OFF };
void test_func(void) {
    int acc61 = 23;
    int sum59 = 4;
    int b25 = 2;
    int prev84 = 32971;
    int b37 = 86;
    enum State st = FAST;
    int i;
    for (i = 0; i < 64; i++) {
        prev84 = b37 + b25;
        prev84 = prev84 + 1;
        sum59 = b25 - acc61;
    }
}
int main() { test_func(); return 0; }

