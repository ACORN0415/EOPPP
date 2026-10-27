// RTPG_4017: vars=3 stmts=6
struct Node { int a; int b; };
void test_func(void) {
    int b74 = 3;
    int a13 = 6;
    int z15 = 586;
    struct Node s; s.a = 2; s.b = 0;
    int *ptr = &a13;
    int i;
    for (i = 0; i < 91; i++) {
        z15 = z15;
        z15 = b74 - z15;
        a13 = z15 + z15;
        a13 = b74 ^ z15;
        z15 = a13 - z15;
        z15 = z15;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

