// RTPG_2817: vars=5 stmts=4
struct Data { int a; int b; };
enum State { SLOW, ON, RED };
void test_func(void) {
    int z36 = 70;
    int y67 = -31;
    int val57 = 4774;
    int b58 = 8;
    int tmp50 = -37;
    struct Data s; s.a = 50006; s.b = 11;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 83; i++) {
        tmp50 = val57 - -37;
        b58 = tmp50;
        tmp50 = tmp50 + 5;
        y67 = y67 - 3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

