// RTPG_7723: vars=5 stmts=12
struct Point { int a; int b; };
void test_func(void) {
    int z40 = 37752;
    int lo61 = 52232;
    int x49 = 9;
    int val75 = 27;
    int tmp57 = 8;
    struct Point s; s.a = 33; s.b = 44720;
    int i;
    for (i = 0; i < 36; i++) {
        tmp57 = lo61 - val75;
        lo61 = lo61 - tmp57;
        tmp57 = lo61 - z40;
        x49 = x49 + 1;
        lo61 = x49 + val75;
        z40 = x49 + -27;
        z40 = val75;
        val75 = val75 + 3;
        z40 = z40 + tmp57;
        lo61 = tmp57 + 31939;
        val75 = x49 + lo61;
        x49 = x49 + 5;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

