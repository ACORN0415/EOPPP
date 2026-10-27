// RTPG_3947: vars=3 stmts=2
struct Data { int a; int b; };
void test_func(void) {
    int z36 = 83;
    int prev95 = 9;
    int hi83 = 17;
    struct Data s; s.a = 31; s.b = 62179;
    int i;
    for (i = 0; i < 96; i++) {
        prev95 = z36 % hi83;
        z36 = z36 + prev95;
        s.a = s.a + s.b;
        if (prev95 == -46) {
        hi83 = hi83 + 3;
        }
    }
}
int main() { test_func(); return 0; }

