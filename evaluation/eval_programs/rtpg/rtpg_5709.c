// RTPG_5709: vars=9 stmts=7
struct Pair { int a; int b; };
enum State { RED, FAST, GREEN };
void test_func(void) {
    int res97 = 44;
    int dat68 = 9;
    int x57 = 84;
    int x55 = 44;
    int a44 = 2270;
    int v3 = 9;
    int a40 = 3;
    int c4 = 43;
    int v95 = 59;
    struct Pair s; s.a = 2; s.b = 3;
    enum State st = RED;
    int i;
    for (i = 0; i < 100; i++) {
        a44 = x57;
        x55 = a40 - a44;
        a44 = a44 + res97;
        c4 = c4 - 2;
        v3 = v95;
        dat68 = c4 + v95;
        a40 = v95;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

