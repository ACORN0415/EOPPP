// RTPG_9321: vars=3 stmts=6
enum State { GREEN, FAST, RED };
void test_func(void) {
    int c10 = 40;
    int x10 = 41;
    int tmp38 = 25;
    enum State st = GREEN;
    int i;
    for (i = 0; i < 84; i++) {
        c10 = c10 + 1;
        tmp38 = c10 + tmp38;
        tmp38 = tmp38;
        x10 = tmp38 + x10;
        tmp38 = c10 + x10;
        c10 = x10 + tmp38;
    }
}
int main() { test_func(); return 0; }

