// RTPG_8241: vars=7 stmts=5
struct Point { int a; int b; };
void test_func(void) {
    int out14 = 98;
    int out37 = -41;
    int cnt92 = 5;
    int hi80 = 77;
    int val51 = 53;
    int a23 = 7757;
    int out51 = 46;
    struct Point s; s.a = -14; s.b = 75;
    int i;
    for (i = 0; i < 60; i++) {
        val51 = val51 - cnt92;
        out14 = val51 + a23;
        out37 = cnt92 - 3;
        out37 = a23 + 9;
        out37 = cnt92;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

