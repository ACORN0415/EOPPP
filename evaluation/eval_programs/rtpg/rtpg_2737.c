// RTPG_2737: vars=3 stmts=5
struct Node { int a; int b; };
void test_func(void) {
    int x0 = 14;
    int sum60 = -33;
    int c50 = 18;
    struct Node s; s.a = 84; s.b = 85;
    int h0 = 38;
    int sv0 = 0;
    int h1 = 55;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        c50 = sum60 - x0;
        sum60 = x0 - c50;
        sum60 = c50 * -32;
        c50 = x0 - c50;
        sum60 = c50 - 1;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

