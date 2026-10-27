// RTPG_3411: vars=4 stmts=7
enum State { RED, BLUE, FAST };
void test_func(void) {
    int val85 = 78;
    int val83 = 28650;
    int a0 = -2;
    int acc98 = 59;
    enum State st = RED;
    int i;
    for (i = 0; i < 5; i++) {
        val85 = acc98 - val83;
        acc98 = val83;
        a0 = a0 + 5;
        val83 = val83 - a0;
        acc98 = val85 + val83;
        val83 = val85;
        a0 = acc98;
    }
}
int main() { test_func(); return 0; }

