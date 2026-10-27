// RTPG_5580: vars=4 stmts=3
enum State { GREEN, RED, BLUE };
void test_func(void) {
    int z50 = 5;
    int hi94 = 21;
    int out48 = 16134;
    int out16 = 7;
    enum State st = GREEN;
    int h0 = 10613;
    int sv0 = 0;
    int h1 = 21;
    int sv1 = 0;
    int i;
    for (i = 0; i < 61; i++) {
        out48 = out16 - out48;
        hi94 = out48 * 13;
        out16 = out48 + 39;
    }
}
int main() { test_func(); return 0; }

