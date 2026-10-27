// RTPG_8516: vars=3 stmts=5
struct Data { int a; int b; };
void test_func(void) {
    int prev45 = 1978;
    int lo91 = 32218;
    int tmp48 = -29;
    struct Data s; s.a = 63553; s.b = 66;
    int i;
    for (i = 0; i < 12; i++) {
        prev45 = tmp48 + lo91;
        prev45 = prev45 + 2;
        prev45 = tmp48 + 23;
        lo91 = prev45 - lo91;
        prev45 = lo91 + 33074;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

