// RTPG_5313: vars=3 stmts=3
struct Node { int a; int b; };
void test_func(void) {
    int b67 = -35;
    int b73 = 62706;
    int y36 = 9;
    struct Node s; s.a = 93; s.b = 9;
    int i;
    for (i = 0; i < 12; i++) {
        b73 = y36 + b67;
        y36 = y36 - 1;
        y36 = y36;
        s.a = s.a + s.b;
        if (b67 <= 82) {
        b67 = y36 - b67;
        }
    }
}
int main() { test_func(); return 0; }

