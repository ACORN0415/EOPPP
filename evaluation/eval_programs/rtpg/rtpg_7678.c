// RTPG_7678: vars=8 stmts=2
struct Node { int a; int b; };
void test_func(void) {
    int y6 = -11;
    int x82 = -34;
    int c78 = 82;
    int b56 = 18746;
    int res84 = 20;
    int a47 = 92;
    int tmp96 = 50848;
    int lo92 = -28;
    struct Node s; s.a = 98; s.b = 37568;
    int *ptr = &lo92;
    int i;
    for (i = 0; i < 59; i++) {
        a47 = a47 + 5;
        a47 = b56;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

