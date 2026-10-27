// RTPG_529: vars=4 stmts=6
struct Data { int a; int b; };
void test_func(void) {
    int x5 = 56013;
    int hi16 = 31771;
    int cnt27 = 7;
    int prev90 = 96;
    struct Data s; s.a = 28; s.b = 10;
    int i;
    for (i = 0; i < 56; i++) {
        x5 = hi16;
        x5 = x5;
        x5 = hi16;
        cnt27 = cnt27 - 38;
        cnt27 = x5 + hi16;
        prev90 = prev90 - 2;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

