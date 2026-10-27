// RTPG_3909: vars=5 stmts=4
struct Pair { int a; int b; };
void test_func(void) {
    int cnt21 = 33;
    int lo25 = 8;
    int a73 = 8;
    int prev1 = 28;
    int val48 = 63004;
    struct Pair s; s.a = 25; s.b = -5;
    int i;
    for (i = 0; i < 62; i++) {
        val48 = cnt21 % lo25;
        lo25 = cnt21 + prev1;
        prev1 = prev1 - 5;
        cnt21 = cnt21 + a73;
        s.a = s.a + s.b;
        if (lo25 >= 65) {
        cnt21 = cnt21 + 89;
        }
    }
}
int main() { test_func(); return 0; }

