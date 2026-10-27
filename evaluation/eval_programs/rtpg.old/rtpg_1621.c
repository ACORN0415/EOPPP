// RTPG_1621: vars=3 stmts=3
enum State { FAST, GREEN, OFF };
void test_func(void) {
    int b68 = 0;
    int hi10 = 26;
    int tmp64 = 5;
    enum State st = FAST;
    int i;
    for (i = 0; i < 72; i++) {
        b68 = b68 - 3;
        hi10 = hi10 - b68;
        b68 = b68 - 4;
        if (hi10 < -43) {
        tmp64 = hi10 - b68;
        }
    }
}
int main() { test_func(); return 0; }

