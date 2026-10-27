// RTPG_1104: vars=5 stmts=7
struct Data { int a; int b; };
enum State { ON, GREEN, RED };
void test_func(void) {
    int cur6 = 7;
    int x13 = 0;
    int acc31 = 1;
    int out53 = 2523;
    int a17 = 21237;
    struct Data s; s.a = 7; s.b = 29;
    enum State st = ON;
    int i;
    for (i = 0; i < 48; i++) {
        acc31 = out53 - a17;
        a17 = a17 + 3;
        a17 = acc31;
        out53 = out53;
        acc31 = acc31 + 5;
        cur6 = cur6 - 4;
        acc31 = a17 + 62684;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

