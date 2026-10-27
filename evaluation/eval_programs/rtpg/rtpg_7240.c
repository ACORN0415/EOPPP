// RTPG_7240: vars=3 stmts=8
struct Point { int a; int b; };
void test_func(void) {
    int a69 = 9;
    int cur17 = 42;
    int x19 = 5;
    struct Point s; s.a = -13; s.b = 7;
    int i;
    for (i = 0; i < 38; i++) {
        a69 = cur17 - 6;
        cur17 = x19 + a69;
        a69 = a69 - cur17;
        a69 = cur17;
        cur17 = a69;
        x19 = cur17;
        a69 = x19 + 6;
        a69 = a69 - 2;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

