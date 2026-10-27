// RTPG_9832: vars=8 stmts=6
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    double prev62 = 40.53;
    int hi14 = 34494;
    int tmp37 = 4;
    int prev28 = 61561;
    double val47 = 42.97;
    int hi73 = 8;
    int c4 = -36;
    int acc71 = 81;
    struct Point s; s.a = 7; s.b = 46;
    int h0 = 61841;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int h2 = 100;
    int sv2 = 0;
    int h3 = 5;
    int sv3 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        acc71 = xn[i];
        val47 = acc71;
        c4 = acc71;
        hi14 = hi14;
        prev62 = acc71 * 8;
        tmp37 = hi14 + 7;
        tmp37 = tmp37 - 1;
        s.a = s.a + s.b;
        if (tmp37 > 89) {
        tmp37 = hi14 - val47;
        }
        yo[i] = val47;
    }
}
int main() { test_func(); return 0; }

