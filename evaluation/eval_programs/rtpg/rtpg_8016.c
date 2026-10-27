// RTPG_8016: vars=4 stmts=5
enum State { ON, FAST, GREEN };
void test_func(void) {
    int y28 = 2;
    int val43 = 0;
    int v95 = 18;
    int out83 = 8;
    enum State st = ON;
    int i;
    for (i = 0; i < 68; i++) {
        val43 = y28 + val43;
        y28 = out83 - val43;
        out83 = val43 + y28;
        val43 = val43 - -31;
        out83 = val43 - 41;
    }
}
int main() { test_func(); return 0; }

