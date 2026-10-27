// RTPG_2860: vars=3 stmts=3
enum State { BLUE, GREEN, RED };
void test_func(void) {
    int acc64 = -9;
    int out17 = 30;
    int b78 = -41;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 47; i++) {
        acc64 = acc64 - acc64;
        b78 = b78 + 2;
        out17 = acc64;
        if (b78 <= 69) {
        b78 = acc64 - b78;
        }
    }
}
int main() { test_func(); return 0; }

