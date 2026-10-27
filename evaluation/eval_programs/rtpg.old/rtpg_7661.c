// RTPG_7661: vars=3 stmts=5
struct Pair { int a; int b; };
void test_func(void) {
    int tmp29 = 19;
    int hi77 = 4;
    int cnt84 = 21545;
    struct Pair s; s.a = 49; s.b = 63;
    int *ptr = &hi77;
    int i;
    for (i = 0; i < 75; i++) {
        cnt84 = tmp29 + 82;
        tmp29 = tmp29;
        hi77 = hi77;
        cnt84 = tmp29 - cnt84;
        cnt84 = tmp29 + -26;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

