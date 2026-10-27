// RTPG_286: vars=4 stmts=3
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int lo10 = -26;
    int res87 = -44;
    int v74 = -45;
    int val96 = 64;
    struct Point s; s.a = 10; s.b = 3;
    int i;
    for (i = 0; i < 16; i++) {
        v74 = xn[i];
        res87 = res87 + 59;
        v74 = lo10 - res87;
        v74 = v74 + res87;
        s.a = s.a + s.b;
        yo[i] = lo10;
    }
}
int main() { test_func(); return 0; }

