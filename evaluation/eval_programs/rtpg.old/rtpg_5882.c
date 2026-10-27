// RTPG_5882: vars=5 stmts=2
int xn[32];
int yo[32];
struct Node { int a; int b; };
void test_func(void) {
    int v76 = -36;
    int c36 = 64;
    int hi5 = 2;
    int dat18 = 10612;
    int res46 = 0;
    struct Node s; s.a = 1; s.b = 88;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 23;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        res46 = xn[i];
        hi5 = res46 * 63;
        res46 = res46 + 5;
        s.a = s.a + s.b;
        yo[i] = hi5;
    }
}
int main() { test_func(); return 0; }

