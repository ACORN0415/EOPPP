// RTPG_8795: vars=4 stmts=3
struct Point { int a; int b; };
void test_func(void) {
    double tmp78 = 60.16;
    int hi88 = 44;
    int acc45 = 1;
    double acc75 = 43.07;
    struct Point s; s.a = 93; s.b = 39;
    int i;
    for (i = 0; i < 47; i++) {
        hi88 = tmp78 + acc75;
        tmp78 = acc45 + 97;
        hi88 = hi88;
        s.a = s.a + s.b;
        if (acc75 != 44) {
        acc75 = acc75 - 5;
        }
    }
}
int main() { test_func(); return 0; }

