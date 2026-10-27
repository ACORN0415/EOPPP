// RTPG_6187: vars=9 stmts=4
struct Pair { int a; int b; };
void test_func(void) {
    int hi65 = -34;
    int out52 = 21691;
    int prev44 = 8;
    int cur28 = -12;
    int v10 = 7;
    int b15 = 0;
    int b65 = -32;
    int a59 = 21;
    int sum36 = 56341;
    struct Pair s; s.a = 1; s.b = 2;
    int *ptr = &a59;
    int h0 = 50802;
    int sv0 = 0;
    int h1 = -2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 9; i++) {
        a59 = a59 + 3;
        out52 = b65 * 22;
        b15 = cur28 + b15;
        a59 = out52 * 71;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

