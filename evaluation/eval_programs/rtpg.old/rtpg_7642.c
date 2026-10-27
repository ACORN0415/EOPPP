// RTPG_7642: vars=5 stmts=12
struct Point { int a; int b; };
void test_func(void) {
    int x49 = 37752;
    int z40 = 52232;
    int lo61 = 9;
    int tmp57 = 27;
    int val75 = 8;
    struct Point s; s.a = 33; s.b = 44720;
    int i;
    for (i = 0; i < 36; i++) {
        val75 = z40 - tmp57;
        z40 = z40 - val75;
        val75 = z40 - x49;
        lo61 = lo61 + 1;
        z40 = lo61 + tmp57;
        x49 = lo61 + -27;
        x49 = tmp57;
        tmp57 = tmp57 + 3;
        x49 = x49 + val75;
        z40 = val75 + 31939;
        tmp57 = lo61 + z40;
        lo61 = lo61 + 5;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

