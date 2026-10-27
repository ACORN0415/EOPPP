// RTPG_7525: vars=8 stmts=4
struct Point { int a; int b; };
void test_func(void) {
    int hi42 = 44;
    int z54 = -20;
    int cnt28 = -41;
    int lo77 = 78;
    int sum81 = 9;
    int res77 = 5;
    int c82 = 44;
    int val24 = 15;
    struct Point s; s.a = 46557; s.b = 3;
    int i;
    for (i = 0; i < 35; i++) {
        z54 = z54 - 1;
        z54 = z54 + 4;
        val24 = val24;
        res77 = res77 + 5;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

