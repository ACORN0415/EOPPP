// RTPG_555: vars=4 stmts=2
struct Point { int a; int b; };
void test_func(void) {
    int c76 = -43;
    int out59 = 22;
    int v33 = 35;
    int hi6 = 98;
    struct Point s; s.a = 64274; s.b = 9;
    int *ptr = &v33;
    int i;
    for (i = 0; i < 6; i++) {
        out59 = v33 - out59;
        out59 = out59 + 1;
        *ptr = *ptr + 5;
        s.a = s.a + s.b;
        if (out59 == 48) {
        out59 = hi6 - 2;
        }
    }
}
int main() { test_func(); return 0; }

