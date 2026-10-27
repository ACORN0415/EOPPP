// RTPG_5111: vars=8 stmts=2
enum State { BLUE, FAST, OFF };
void test_func(void) {
    int lo64 = 6;
    int lo80 = 58;
    int b27 = 0;
    double cnt60 = 85.67;
    int tmp78 = 33367;
    float y50 = 63.97;
    int z96 = 49;
    int cur51 = 5;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 16; i++) {
        b27 = tmp78 ^ z96;
        lo64 = z96;
    }
}
int main() { test_func(); return 0; }

