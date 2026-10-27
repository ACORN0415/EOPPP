// RTPG_5229: vars=6 stmts=5
struct Pair { int a; int b; };
void test_func(void) {
    int a63 = 45042;
    int cur36 = 0;
    int cur5 = -2;
    int prev40 = 29;
    int a50 = 5;
    int out62 = 49093;
    struct Pair s; s.a = 5; s.b = 60;
    int *ptr = &cur5;
    int i;
    for (i = 0; i < 69; i++) {
        a50 = cur36 - 22;
        a63 = a63 - 5;
        a50 = a50 - a63;
        out62 = out62 - 2;
        a50 = a50 + 4;
        *ptr = *ptr + 2;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

