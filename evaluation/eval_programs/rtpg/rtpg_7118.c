// RTPG_7118: vars=7 stmts=3
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int b46 = 5;
    int v25 = 697;
    int b69 = 40089;
    int val16 = 7;
    int c42 = 4;
    int res20 = -36;
    int cur33 = 10;
    struct Pair s; s.a = 9201; s.b = 7;
    int h0 = 7;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int h2 = 30;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cur33 = xn[i];
        val16 = b46 & b69;
        cur33 = v25 | b69;
        b46 = b46 * 0;
        s.a = s.a + s.b;
        yo[i] = c42;
    }
}
int main() { test_func(); return 0; }

