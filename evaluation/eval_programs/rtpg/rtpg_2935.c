// RTPG_2935: vars=7 stmts=2
enum State { GREEN, SLOW, FAST };
void test_func(void) {
    int sum46 = -40;
    int c69 = 7;
    int v81 = 83;
    int y39 = 0;
    int x98 = 87;
    int val36 = 9;
    int prev92 = 34510;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 100; i++) {
        val36 = val36 - prev92;
        y39 = val36 - c69;
        if (v81 >= 95) {
        y39 = val36 - val36;
        }
    }
}
int main() { test_func(); return 0; }

