// RTPG_5493: vars=4 stmts=3
enum State { GREEN, RED, BLUE };
void test_func(void) {
    int z50 = 5;
    int out16 = 21;
    int hi94 = 16134;
    int out48 = 7;
    enum State st = GREEN;
    int h0 = 10613;
    int sv0 = 0;
    int h1 = 21;
    int sv1 = 0;
    int i;
    for (i = 0; i < 61; i++) {
        hi94 = out48 - hi94;
        out16 = hi94 * 13;
        out48 = hi94 + 39;
    }
}
int main() { test_func(); return 0; }

