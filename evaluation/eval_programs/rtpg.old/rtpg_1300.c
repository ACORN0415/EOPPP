// RTPG_1300: vars=4 stmts=2
struct Point { int a; int b; };
void test_func(void) {
    int v21 = -41;
    int res80 = 3;
    int c13 = 4487;
    int x51 = 21;
    struct Point s; s.a = 10; s.b = -48;
    int i;
    for (i = 0; i < 89; i++) {
        res80 = c13 - res80;
        c13 = c13;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

