// RTPG_6442: vars=9 stmts=4
struct Pair { int a; int b; };
enum State { BLUE, SLOW, FAST };
void test_func(void) {
    int res74 = -18;
    int b23 = -49;
    int tmp32 = 1795;
    int val91 = 34;
    int prev56 = 33;
    int tmp29 = 27;
    int res10 = 42873;
    int y34 = 8;
    int a38 = 7;
    struct Pair s; s.a = 9; s.b = 5;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 91; i++) {
        val91 = a38 | val91;
        b23 = tmp29 - a38;
        tmp29 = a38 - b23;
        tmp29 = tmp29 + 3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

