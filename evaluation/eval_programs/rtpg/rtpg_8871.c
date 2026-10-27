// RTPG_8871: vars=8 stmts=2
struct Pair { int a; int b; };
void test_func(void) {
    int x74 = -23;
    int lo46 = 96;
    int acc15 = -20;
    int dat30 = 36;
    int z90 = 8;
    int lo66 = 9;
    int cnt34 = -36;
    int prev20 = 17;
    struct Pair s; s.a = 3; s.b = 10;
    int i;
    for (i = 0; i < 81; i++) {
        z90 = prev20 - 19;
        prev20 = prev20 - z90;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

