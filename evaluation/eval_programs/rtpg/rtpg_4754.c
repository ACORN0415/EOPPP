// RTPG_4754: vars=5 stmts=4
struct Point { int a; int b; };
void test_func(void) {
    int b79 = -7;
    int cur86 = 38;
    int y81 = 1569;
    int val66 = 3;
    int sum30 = 44;
    struct Point s; s.a = -44; s.b = 3;
    int i;
    for (i = 0; i < 33; i++) {
        y81 = y81 - 1;
        y81 = y81 + 2;
        sum30 = y81;
        sum30 = val66 - cur86;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

