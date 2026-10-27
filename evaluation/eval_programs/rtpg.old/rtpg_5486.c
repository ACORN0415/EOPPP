// RTPG_5486: vars=4 stmts=5
struct Node { int a; int b; };
void test_func(void) {
    int acc71 = 4;
    int v40 = 8865;
    int cur98 = 2;
    int b57 = -17;
    struct Node s; s.a = 52761; s.b = 30;
    int i;
    for (i = 0; i < 73; i++) {
        b57 = v40;
        cur98 = v40 ^ acc71;
        cur98 = v40 & b57;
        v40 = b57;
        acc71 = acc71 - 1;
        s.a = s.a + s.b;
        if (v40 <= -6) {
        v40 = b57 - cur98;
        }
    }
}
int main() { test_func(); return 0; }

