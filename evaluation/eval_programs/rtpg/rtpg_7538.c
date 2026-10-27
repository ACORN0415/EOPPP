// RTPG_7538: vars=10 stmts=5
struct Node { int a; int b; };
void test_func(void) {
    int cnt89 = 104;
    int tmp86 = 12616;
    int y69 = 11398;
    int z65 = 19;
    int c41 = 9035;
    int dat78 = 16612;
    int y49 = 3;
    int v24 = 44031;
    int hi42 = 67;
    int acc60 = 3;
    struct Node s; s.a = 5; s.b = 3;
    int i;
    for (i = 0; i < 63; i++) {
        acc60 = acc60 - tmp86;
        y69 = y69 + 4;
        hi42 = dat78 + cnt89;
        c41 = c41 + 3;
        y49 = v24;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

