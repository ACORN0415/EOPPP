// RTPG_7651: vars=4 stmts=2
struct Node { int a; int b; };
void test_func(void) {
    int y66 = -12;
    int out66 = -36;
    int c79 = 11133;
    int v55 = 10;
    struct Node s; s.a = 8; s.b = 38240;
    int i;
    for (i = 0; i < 92; i++) {
        y66 = y66 - 4;
        out66 = c79;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

