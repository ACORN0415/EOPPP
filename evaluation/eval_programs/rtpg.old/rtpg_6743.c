// RTPG_6743: vars=3 stmts=4
struct Pair { int a; int b; };
void test_func(void) {
    int prev43 = 28203;
    int acc45 = 25924;
    int cur50 = -43;
    struct Pair s; s.a = 19; s.b = 3;
    int *ptr = &acc45;
    int i;
    for (i = 0; i < 57; i++) {
        prev43 = prev43 - 5;
        cur50 = cur50 | cur50;
        acc45 = cur50 / acc45;
        acc45 = acc45 - 5;
        *ptr = *ptr + 1;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

