// RTPG_7209: vars=9 stmts=8
enum State { GREEN, FAST, RED };
void test_func(void) {
    int prev74 = 2;
    int cnt95 = 64;
    int c33 = 25691;
    float val57 = 27.17;
    double res66 = 88.51;
    int cur19 = 5;
    int x29 = 34;
    int b52 = 35028;
    int lo89 = 24;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 16; i++) {
        cur19 = cur19 + 5;
        cur19 = cur19 - 5;
        val57 = res66 - prev74;
        cur19 = cur19 + 1;
        cnt95 = res66 - cnt95;
        val57 = val57 - x29;
        b52 = cnt95 + c33;
        lo89 = lo89 + 2;
        if (lo89 >= -41) {
        prev74 = prev74 + cur19;
        }
    }
}
int main() { test_func(); return 0; }

