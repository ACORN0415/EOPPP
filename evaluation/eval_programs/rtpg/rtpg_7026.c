// RTPG_7026: vars=4 stmts=4
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int c86 = 17977;
    int y17 = 58;
    int v46 = 50;
    int hi12 = 4;
    struct Pair s; s.a = 15; s.b = 5;
    int i;
    for (i = 0; i < 64; i++) {
        c86 = xn[i];
        y17 = hi12 - c86;
        y17 = hi12 + hi12;
        c86 = c86 - 2;
        c86 = c86 - 3;
        s.a = s.a + s.b;
        if (c86 != -34) {
        hi12 = c86 - 16085;
        }
        yo[i] = y17;
    }
}
int main() { test_func(); return 0; }

