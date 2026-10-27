// RTPG_5074: vars=4 stmts=7
struct Pair { int a; int b; };
void test_func(void) {
    int prev15 = 42;
    int sum89 = 13;
    int cur72 = 26;
    int tmp0 = 24;
    struct Pair s; s.a = 90; s.b = 6;
    int h0 = -33;
    int sv0 = 0;
    int h1 = -12;
    int sv1 = 0;
    int i;
    for (i = 0; i < 42; i++) {
        tmp0 = prev15;
        sum89 = sum89 + 4;
        sum89 = sum89 + 3;
        tmp0 = prev15 + 64665;
        sum89 = sum89 - 3;
        cur72 = sum89 * 3032;
        sum89 = tmp0 * 62116;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

