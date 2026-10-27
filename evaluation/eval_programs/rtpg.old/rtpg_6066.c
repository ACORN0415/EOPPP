// RTPG_6066: vars=6 stmts=3
enum State { GREEN, SLOW, OFF };
void test_func(void) {
    int z16 = -47;
    int z25 = 10;
    int c2 = 23;
    int prev41 = 3;
    int v92 = 7;
    int y32 = 55612;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 40; i++) {
        prev41 = c2 + 9;
        prev41 = z16 + c2;
        y32 = c2 - 38;
        if (y32 > -21) {
        z25 = y32;
        }
    }
}
int main() { test_func(); return 0; }

