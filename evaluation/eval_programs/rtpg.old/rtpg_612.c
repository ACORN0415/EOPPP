// RTPG_612: vars=5 stmts=3
struct Node { int a; int b; };
void test_func(void) {
    int v75 = 18140;
    int c24 = 49;
    int tmp43 = 13;
    int x66 = 3;
    int z76 = 24;
    struct Node s; s.a = 56; s.b = 13792;
    int i;
    for (i = 0; i < 41; i++) {
        tmp43 = tmp43 - 3;
        x66 = x66 - 4;
        x66 = z76 - x66;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

