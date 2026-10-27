// RTPG_285: vars=4 stmts=3
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int res87 = -26;
    int val96 = -44;
    int lo10 = -45;
    int v74 = 64;
    struct Point s; s.a = 10; s.b = 3;
    int i;
    for (i = 0; i < 16; i++) {
        lo10 = xn[i];
        val96 = val96 + 59;
        lo10 = res87 - val96;
        lo10 = lo10 + val96;
        s.a = s.a + s.b;
        yo[i] = res87;
    }
}
int main() { test_func(); return 0; }

