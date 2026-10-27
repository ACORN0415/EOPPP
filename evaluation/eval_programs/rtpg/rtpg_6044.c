// RTPG_6044: vars=3 stmts=7
struct Pair { int a; int b; };
enum State { SLOW, OFF, GREEN };
void test_func(void) {
    int cnt95 = 44848;
    int b50 = 37;
    int c3 = 10;
    struct Pair s; s.a = 35918; s.b = 2;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 79; i++) {
        cnt95 = c3 - 18;
        c3 = c3 - 3;
        c3 = c3 - cnt95;
        cnt95 = cnt95 + 1;
        b50 = b50 - 4;
        cnt95 = cnt95 + 4;
        c3 = b50;
        s.a = s.a + s.b;
        if (c3 < -14) {
        cnt95 = cnt95 - c3;
        }
    }
}
int main() { test_func(); return 0; }

