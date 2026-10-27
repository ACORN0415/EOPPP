// RTPG_5573: vars=4 stmts=5
struct Node { int a; int b; };
void test_func(void) {
    int v40 = 4;
    int cur98 = 8865;
    int b57 = 2;
    int acc71 = -17;
    struct Node s; s.a = 52761; s.b = 30;
    int i;
    for (i = 0; i < 73; i++) {
        acc71 = cur98;
        b57 = cur98 ^ v40;
        b57 = cur98 & b57;
        cur98 = acc71;
        v40 = v40 - 1;
        s.a = s.a + s.b;
        if (cur98 <= -6) {
        cur98 = acc71 - b57;
        }
    }
}
int main() { test_func(); return 0; }

