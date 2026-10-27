// RTPG_807: vars=6 stmts=7
struct Data { int a; int b; };
void test_func(void) {
    int b89 = -34;
    int dat3 = 59;
    int x47 = 86;
    int lo28 = -13;
    int a64 = 29134;
    int val57 = 9;
    struct Data s; s.a = 10; s.b = -24;
    int i;
    for (i = 0; i < 81; i++) {
        x47 = a64;
        b89 = lo28 - x47;
        lo28 = lo28 + 4;
        b89 = b89 + 1;
        lo28 = dat3;
        a64 = a64;
        x47 = dat3 + lo28;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

