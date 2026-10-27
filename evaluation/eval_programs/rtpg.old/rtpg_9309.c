// RTPG_9309: vars=4 stmts=12
enum State { RED, SLOW, BLUE };
void test_func(void) {
    int tmp25 = 20419;
    int val2 = 21;
    int res31 = 62136;
    int out80 = 11;
    enum State st = RED;
    int h0 = 14;
    int sv0 = 0;
    int h1 = -50;
    int sv1 = 0;
    int i;
    for (i = 0; i < 11; i++) {
        out80 = out80 + 4;
        res31 = val2 * 77;
        tmp25 = res31 * 2;
        val2 = val2 + out80;
        out80 = out80 + res31;
        val2 = val2 + 31;
        val2 = out80 * 0;
        res31 = tmp25 + val2;
        res31 = val2;
        res31 = res31 - 4;
        res31 = res31 - 1;
        res31 = tmp25 * 50217;
    }
}
int main() { test_func(); return 0; }

