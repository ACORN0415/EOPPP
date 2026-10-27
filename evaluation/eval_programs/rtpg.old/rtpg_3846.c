// RTPG_3846: vars=5 stmts=6
struct Pair { int a; int b; };
void test_func(void) {
    int v21 = -31;
    float hi91 = 77.03;
    int c38 = 4;
    double b73 = 30.57;
    int cnt86 = 2;
    struct Pair s; s.a = -47; s.b = 10;
    int i;
    for (i = 0; i < 43; i++) {
        v21 = b73 + -40;
        hi91 = b73 + 61;
        cnt86 = b73 - cnt86;
        b73 = b73 - 1;
        b73 = hi91 + cnt86;
        b73 = hi91;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

