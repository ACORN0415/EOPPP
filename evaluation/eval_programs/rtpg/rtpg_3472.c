// RTPG_3472: vars=8 stmts=7
enum State { FAST, OFF, RED };
void test_func(void) {
    int x30 = 1;
    int b15 = 16;
    int val61 = 36510;
    int res90 = 63160;
    int x60 = 30;
    int cur67 = 4;
    int x94 = 5;
    int cur34 = 8;
    enum State st = FAST;
    int i;
    for (i = 0; i < 71; i++) {
        x30 = x30 - 5;
        x60 = x60 + x60;
        b15 = b15 + 5;
        b15 = cur67;
        cur67 = x30 + b15;
        res90 = res90 + 2;
        x60 = x60 + 5;
        if (b15 >= -1) {
        x94 = cur67 + x94;
        }
    }
}
int main() { test_func(); return 0; }

