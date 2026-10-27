// RTPG_2695: vars=3 stmts=3
enum State { GREEN, BLUE, OFF };
void test_func(void) {
    int tmp47 = -40;
    int c92 = -39;
    int b17 = 19;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 34; i++) {
        c92 = c92 + 10;
        tmp47 = tmp47 + tmp47;
        c92 = b17 + b17;
    }
}
int main() { test_func(); return 0; }

