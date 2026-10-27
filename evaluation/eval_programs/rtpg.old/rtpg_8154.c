// RTPG_8154: vars=3 stmts=3
enum State { RED, OFF, BLUE };
void test_func(void) {
    int out11 = -27;
    int y58 = 1;
    int sum28 = 74;
    enum State st = RED;
    int i;
    for (i = 0; i < 23; i++) {
        y58 = y58 + 2;
        y58 = sum28 + y58;
        out11 = out11 + sum28;
    }
}
int main() { test_func(); return 0; }

