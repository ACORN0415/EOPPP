// RTPG_8061: vars=3 stmts=6
struct Node { int a; int b; };
void test_func(void) {
    int acc25 = 75;
    int lo99 = 5;
    int hi28 = 9;
    struct Node s; s.a = 19; s.b = -45;
    int i;
    for (i = 0; i < 64; i++) {
        lo99 = hi28;
        lo99 = lo99 - hi28;
        hi28 = lo99 + 44;
        acc25 = acc25 - hi28;
        hi28 = lo99 + hi28;
        hi28 = hi28 + 5;
        s.a = s.a + s.b;
        if (acc25 < 99) {
        hi28 = lo99 - acc25;
        }
    }
}
int main() { test_func(); return 0; }

