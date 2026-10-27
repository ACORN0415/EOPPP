// RTPG_6141: vars=6 stmts=8
enum State { GREEN, ON, BLUE };
void test_func(void) {
    int val63 = 4;
    int res38 = 3;
    int tmp49 = 33314;
    int y84 = 85;
    int b44 = 52110;
    int b87 = 23002;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 66; i++) {
        val63 = res38 - 3;
        b44 = val63 ^ tmp49;
        val63 = tmp49 / tmp49;
        tmp49 = y84 + 41;
        b87 = tmp49 - res38;
        y84 = b87 % val63;
        b44 = val63 - res38;
        b87 = res38 ^ val63;
        if (b87 >= 5) {
        tmp49 = y84 - 6;
        }
    }
}
int main() { test_func(); return 0; }

