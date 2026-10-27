// RTPG_3675: vars=6 stmts=2
struct Node { int a; int b; };
void test_func(void) {
    int prev87 = 3;
    int prev93 = 8;
    int y54 = 50599;
    int sum18 = 6;
    int tmp33 = 9;
    int x65 = 64;
    struct Node s; s.a = 8; s.b = 3;
    int h0 = 95;
    int sv0 = 0;
    int h1 = 9;
    int sv1 = 0;
    int i;
    for (i = 0; i < 66; i++) {
        tmp33 = prev87 + y54;
        prev87 = y54 + 48;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

