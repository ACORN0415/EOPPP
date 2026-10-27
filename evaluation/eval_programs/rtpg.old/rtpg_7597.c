// RTPG_7597: vars=8 stmts=2
struct Node { int a; int b; };
void test_func(void) {
    int c78 = -11;
    int a47 = -34;
    int x82 = 82;
    int lo92 = 18746;
    int tmp96 = 20;
    int b56 = 92;
    int y6 = 50848;
    int res84 = -28;
    struct Node s; s.a = 98; s.b = 37568;
    int *ptr = &res84;
    int i;
    for (i = 0; i < 59; i++) {
        b56 = b56 + 5;
        b56 = lo92;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

