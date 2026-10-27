// RTPG_962: vars=6 stmts=6
struct Point { int a; int b; };
void test_func(void) {
    int hi12 = 23044;
    int hi24 = 45018;
    int cnt39 = 75;
    int z34 = -32;
    int out33 = 97;
    int z57 = 12;
    struct Point s; s.a = 10; s.b = 11535;
    int i;
    for (i = 0; i < 62; i++) {
        z57 = hi12 - hi24;
        out33 = hi12 - 22;
        hi12 = hi12 + 4;
        z57 = z57 + 3;
        hi24 = hi24 + 4;
        hi24 = hi24 + cnt39;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

