// RTPG_4926: vars=3 stmts=4
struct Node { int a; int b; };
enum State { FAST, OFF, SLOW };
void test_func(void) {
    int res64 = 42;
    int res73 = -24;
    int hi28 = 10;
    struct Node s; s.a = 9; s.b = 62895;
    enum State st = FAST;
    int i;
    for (i = 0; i < 80; i++) {
        hi28 = hi28 + res64;
        res73 = res64 + res73;
        res73 = hi28 - 32;
        res73 = res73 + 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

