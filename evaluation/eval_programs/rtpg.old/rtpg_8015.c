// RTPG_8015: vars=5 stmts=4
enum State { RED, OFF, SLOW };
void test_func(void) {
    int a67 = -49;
    int out80 = 80;
    int res1 = 50;
    int a69 = 28;
    int prev61 = 15;
    enum State st = RED;
    int i;
    for (i = 0; i < 59; i++) {
        out80 = out80 + 5;
        res1 = a67;
        prev61 = prev61 + 3;
        res1 = prev61 + out80;
        if (out80 >= 79) {
        prev61 = a69 + res1;
        }
    }
}
int main() { test_func(); return 0; }

