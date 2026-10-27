// RTPG_1965: vars=4 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int prev41 = 7424;
    int acc67 = 9;
    int y28 = 8819;
    int v2 = 5;
    struct Data s; s.a = 64550; s.b = 97;
    int i;
    for (i = 0; i < 16; i++) {
        acc67 = prev41 / acc67;
        acc67 = y28;
        y28 = prev41 + 45;
        prev41 = y28;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

