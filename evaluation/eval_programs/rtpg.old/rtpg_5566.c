// RTPG_5566: vars=4 stmts=3
struct Point { int a; int b; };
void test_func(void) {
    int cur95 = 0;
    int lo35 = 2;
    int tmp90 = 15;
    int prev36 = 62;
    struct Point s; s.a = -22; s.b = 0;
    int i;
    for (i = 0; i < 95; i++) {
        cur95 = cur95 - tmp90;
        cur95 = tmp90 - 58499;
        tmp90 = cur95 + 20;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

