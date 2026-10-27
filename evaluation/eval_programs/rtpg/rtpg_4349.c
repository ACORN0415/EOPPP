// RTPG_4349: vars=6 stmts=4
struct Node { int a; int b; };
void test_func(void) {
    int dat14 = -11;
    int y29 = 3;
    int v76 = -15;
    int res67 = 32;
    int acc66 = -28;
    int a26 = 11;
    struct Node s; s.a = 0; s.b = 3;
    int i;
    for (i = 0; i < 74; i++) {
        v76 = y29 - v76;
        v76 = a26 + -19;
        acc66 = acc66 % y29;
        y29 = y29 + acc66;
        s.a = s.a + s.b;
        if (v76 < 30) {
        y29 = y29 - 1;
        }
    }
}
int main() { test_func(); return 0; }

