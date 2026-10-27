// RTPG_8920: vars=3 stmts=6
enum State { SLOW, BLUE, OFF };
void test_func(void) {
    int dat15 = 9;
    int c84 = 10;
    float y82 = 19.51;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 70; i++) {
        c84 = c84 - 80;
        c84 = c84 + y82;
        y82 = dat15 - c84;
        y82 = y82 + 1;
        y82 = dat15 + c84;
        y82 = y82 + 1;
    }
}
int main() { test_func(); return 0; }

