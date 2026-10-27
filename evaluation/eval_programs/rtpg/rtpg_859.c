// RTPG_859: vars=3 stmts=2
int xn[64];
int yo[64];
enum State { SLOW, BLUE, FAST };
void test_func(void) {
    int out96 = 13;
    int x81 = 20;
    int res75 = 20;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 15; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        x81 = x81 - 3;
        res75 = res75 - out96;
        }
    }
}
int main() { test_func(); return 0; }

