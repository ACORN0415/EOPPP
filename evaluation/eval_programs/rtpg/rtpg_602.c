// RTPG_602: vars=5 stmts=3
struct Node { int a; int b; };
void test_func(void) {
    int c24 = 18140;
    int z76 = 49;
    int x66 = 13;
    int v75 = 3;
    int tmp43 = 24;
    struct Node s; s.a = 56; s.b = 13792;
    int i;
    for (i = 0; i < 41; i++) {
        x66 = x66 - 3;
        v75 = v75 - 4;
        v75 = tmp43 - v75;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

