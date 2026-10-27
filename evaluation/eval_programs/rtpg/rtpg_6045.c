// RTPG_6045: vars=8 stmts=7
struct Node { int a; int b; };
void test_func(void) {
    int b75 = 21894;
    int y48 = 32104;
    int lo38 = 2;
    int x14 = 51;
    int hi54 = 9;
    int y20 = 84;
    int lo66 = 85;
    int out31 = 8;
    struct Node s; s.a = -8; s.b = 52494;
    int i;
    for (i = 0; i < 47; i++) {
        lo38 = lo38 + out31;
        hi54 = lo66;
        lo38 = b75 - 8;
        hi54 = y48;
        b75 = hi54 - y48;
        x14 = y48 + b75;
        y48 = y48 - y20;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

