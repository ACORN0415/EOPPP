// RTPG_5050: vars=4 stmts=6
struct Pair { int a; int b; };
void test_func(void) {
    int a33 = 40;
    int acc43 = 33;
    int prev14 = 64957;
    int tmp59 = 5;
    struct Pair s; s.a = 2; s.b = 9;
    int *ptr = &tmp59;
    int i;
    for (i = 0; i < 98; i++) {
        tmp59 = prev14 - 20;
        a33 = acc43 + prev14;
        a33 = acc43 ^ prev14;
        a33 = a33 + 4;
        a33 = prev14 - 1;
        prev14 = tmp59 | prev14;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
        if (a33 == 13) {
        a33 = tmp59 + a33;
        }
    }
}
int main() { test_func(); return 0; }

