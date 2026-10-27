// RTPG_6246: vars=6 stmts=8
enum State { GREEN, ON, BLUE };
void test_func(void) {
    int tmp49 = 4;
    int b44 = 3;
    int res38 = 33314;
    int val63 = 85;
    int y84 = 52110;
    int b87 = 23002;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 66; i++) {
        tmp49 = b44 - 3;
        y84 = tmp49 ^ val63;
        tmp49 = res38 / val63;
        res38 = val63 + 41;
        b87 = res38 - b44;
        val63 = b87 % tmp49;
        y84 = tmp49 - b44;
        b87 = b44 ^ tmp49;
        if (b87 >= 5) {
        res38 = val63 - 6;
        }
    }
}
int main() { test_func(); return 0; }

