// RTPG_1062: vars=7 stmts=2
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int a14 = 44304;
    int z48 = 5;
    int cur9 = 2;
    int cnt9 = 50;
    int cur10 = -10;
    int c69 = -31;
    int b97 = 7;
    struct Pair s; s.a = 72; s.b = 98;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int h2 = 4;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cur10 = xn[i];
        cur9 = cur9 + a14;
        b97 = cur10 * 4;
        s.a = s.a + s.b;
        yo[i] = cnt9;
    }
}
int main() { test_func(); return 0; }

