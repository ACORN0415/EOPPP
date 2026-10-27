// RTPG_6968: vars=5 stmts=2
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int x56 = 9;
    int v35 = 34;
    int res62 = 0;
    int z1 = 39;
    int res12 = 87;
    struct Point s; s.a = 61; s.b = 45;
    int i;
    for (i = 0; i < 64; i++) {
        v35 = xn[i];
        res12 = res12 - 4;
        v35 = z1 + z1;
        s.a = s.a + s.b;
        yo[i] = z1;
    }
}
int main() { test_func(); return 0; }

