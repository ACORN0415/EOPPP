// RTPG_3279: vars=7 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    int b23 = 84;
    int acc37 = 9;
    int tmp30 = 2;
    int out66 = 26903;
    int out8 = 28951;
    int lo81 = 7;
    int b50 = 4125;
    struct Data s; s.a = 2; s.b = 17105;
    int i;
    for (i = 0; i < 39; i++) {
        b23 = out8 + out66;
        out66 = out66 - 33;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

