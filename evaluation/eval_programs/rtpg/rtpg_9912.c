// RTPG_9912: vars=6 stmts=4
struct Data { int a; int b; };
void test_func(void) {
    int prev19 = 8976;
    int b88 = 35;
    int hi56 = -13;
    int sum36 = -26;
    int res84 = 8491;
    int acc10 = 15;
    struct Data s; s.a = 50; s.b = 8;
    int i;
    for (i = 0; i < 45; i++) {
        acc10 = prev19;
        sum36 = sum36 + prev19;
        sum36 = sum36 + 4;
        hi56 = hi56 + 1;
        s.a = s.a + s.b;
        if (sum36 != 41) {
        prev19 = prev19 - 3;
        }
    }
}
int main() { test_func(); return 0; }

