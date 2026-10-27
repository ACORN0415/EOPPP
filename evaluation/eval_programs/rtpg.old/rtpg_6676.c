// RTPG_6676: vars=7 stmts=3
struct Point { int a; int b; };
void test_func(void) {
    int x9 = 25;
    int sum56 = 70;
    int acc29 = 32;
    int a93 = 36;
    int x50 = 10;
    int out68 = 49;
    int prev81 = 10;
    struct Point s; s.a = 32129; s.b = 0;
    int i;
    for (i = 0; i < 58; i++) {
        prev81 = prev81 + 5;
        sum56 = sum56 + out68;
        out68 = out68 + out68;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

