// RTPG_1942: vars=4 stmts=3
enum State { FAST, BLUE, SLOW };
void test_func(void) {
    int y81 = 0;
    int v39 = 18;
    int z49 = 93;
    int c71 = 3;
    enum State st = FAST;
    int i;
    for (i = 0; i < 29; i++) {
        z49 = z49 + y81;
        z49 = c71 - z49;
        c71 = c71 + 2;
    }
}
int main() { test_func(); return 0; }

