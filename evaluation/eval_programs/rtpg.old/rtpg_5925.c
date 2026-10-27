// RTPG_5925: vars=4 stmts=7
enum State { RED, FAST, GREEN };
void test_func(void) {
    int tmp98 = 26;
    int acc44 = 7571;
    int c78 = -24;
    int c46 = 2;
    enum State st = RED;
    int i;
    for (i = 0; i < 49; i++) {
        c78 = c46 - acc44;
        acc44 = acc44 + 4;
        tmp98 = acc44 + acc44;
        c78 = c46 + c78;
        tmp98 = tmp98 + 7;
        c46 = tmp98 - acc44;
        acc44 = tmp98 - acc44;
    }
}
int main() { test_func(); return 0; }

