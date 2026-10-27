// RTPG_7322: vars=5 stmts=3
enum State { FAST, BLUE, OFF };
void test_func(void) {
    int b37 = 23;
    int b25 = 4;
    int acc61 = 2;
    int sum59 = 32971;
    int prev84 = 86;
    enum State st = FAST;
    int i;
    for (i = 0; i < 64; i++) {
        sum59 = prev84 + acc61;
        sum59 = sum59 + 1;
        b25 = acc61 - b37;
    }
}
int main() { test_func(); return 0; }

