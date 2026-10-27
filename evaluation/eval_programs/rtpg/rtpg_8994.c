// RTPG_8994: vars=3 stmts=2
struct Point { int a; int b; };
void test_func(void) {
    int c3 = 6;
    int out63 = -11;
    int out78 = 14;
    struct Point s; s.a = 84; s.b = 53;
    int i;
    for (i = 0; i < 44; i++) {
        out78 = out63 % c3;
        out78 = out78 - 3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

