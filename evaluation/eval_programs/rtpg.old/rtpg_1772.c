// RTPG_1772: vars=3 stmts=5
struct Pair { int a; int b; };
void test_func(void) {
    int hi81 = 86;
    int c36 = 35;
    int b33 = 45492;
    struct Pair s; s.a = 24864; s.b = 45;
    int i;
    for (i = 0; i < 25; i++) {
        c36 = c36;
        c36 = c36 | hi81;
        hi81 = hi81 | hi81;
        hi81 = c36 / hi81;
        hi81 = b33 - -50;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

