// RTPG_9616: vars=8 stmts=2
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    int acc30 = 44;
    int acc92 = 44839;
    int hi7 = -2;
    int prev76 = 28;
    int tmp7 = 8;
    int a40 = 44472;
    int z87 = -24;
    int cur6 = 34;
    struct Pair s; s.a = -36; s.b = -19;
    int i;
    for (i = 0; i < 16; i++) {
        tmp7 = xn[i];
        prev76 = z87;
        acc92 = acc92 + tmp7;
        s.a = s.a + s.b;
        yo[i] = acc92;
    }
}
int main() { test_func(); return 0; }

