// RTPG_7934: vars=4 stmts=3
struct Point { int a; int b; };
void test_func(void) {
    int c30 = 52425;
    int z85 = 28;
    int res95 = 56;
    int sum22 = 47;
    struct Point s; s.a = -12; s.b = 5;
    int i;
    for (i = 0; i < 50; i++) {
        sum22 = z85 - c30;
        sum22 = c30 - z85;
        sum22 = c30 + sum22;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

