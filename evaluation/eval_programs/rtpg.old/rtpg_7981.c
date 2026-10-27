// RTPG_7981: vars=3 stmts=2
struct Point { int a; int b; };
void test_func(void) {
    int lo67 = 1;
    int lo35 = 4;
    int hi55 = 10;
    struct Point s; s.a = 10224; s.b = 12;
    int i;
    for (i = 0; i < 42; i++) {
        hi55 = lo67 + hi55;
        lo67 = hi55 - lo35;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

