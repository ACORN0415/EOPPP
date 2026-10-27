// RTPG_5943: vars=3 stmts=7
struct Pair { int a; int b; };
enum State { SLOW, OFF, GREEN };
void test_func(void) {
    int cnt95 = 44848;
    int c3 = 37;
    int b50 = 10;
    struct Pair s; s.a = 35918; s.b = 2;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 79; i++) {
        cnt95 = b50 - 18;
        b50 = b50 - 3;
        b50 = b50 - cnt95;
        cnt95 = cnt95 + 1;
        c3 = c3 - 4;
        cnt95 = cnt95 + 4;
        b50 = c3;
        s.a = s.a + s.b;
        if (b50 < -14) {
        cnt95 = cnt95 - b50;
        }
    }
}
int main() { test_func(); return 0; }

