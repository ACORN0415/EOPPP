// RTPG_3958: vars=4 stmts=8
struct Pair { int a; int b; };
void test_func(void) {
    int prev84 = 96;
    int prev41 = 6;
    int out45 = 9;
    int x20 = 10;
    struct Pair s; s.a = 56; s.b = 11;
    int h0 = 52722;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 15; i++) {
        out45 = prev84 ^ out45;
        prev84 = prev41 + out45;
        out45 = x20 + 40;
        prev41 = prev84 | out45;
        out45 = prev41 - x20;
        prev84 = prev41 ^ out45;
        out45 = x20 / x20;
        prev41 = prev41 ^ prev41;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

