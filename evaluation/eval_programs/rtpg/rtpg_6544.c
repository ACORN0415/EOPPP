// RTPG_6544: vars=3 stmts=3
struct Pair { int a; int b; };
void test_func(void) {
    int y69 = 0;
    int x9 = 89;
    int out15 = 9;
    struct Pair s; s.a = 21; s.b = 10887;
    int i;
    for (i = 0; i < 47; i++) {
        out15 = y69 - x9;
        x9 = y69 + y69;
        out15 = out15 - x9;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

