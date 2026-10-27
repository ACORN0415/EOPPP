// RTPG_9743: vars=10 stmts=3
struct Pair { int a; int b; };
void test_func(void) {
    int cur89 = 62755;
    int prev62 = 19;
    int cur96 = 9;
    int acc99 = 30;
    int sum63 = 2;
    int sum40 = -7;
    int a92 = 32;
    int val95 = 0;
    int sum20 = 43356;
    int tmp53 = 89;
    struct Pair s; s.a = 69; s.b = -19;
    int i;
    for (i = 0; i < 27; i++) {
        acc99 = sum20;
        sum63 = sum20 + 41;
        cur89 = prev62;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

