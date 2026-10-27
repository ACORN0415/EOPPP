// RTPG_8618: vars=9 stmts=5
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int prev49 = 13;
    int cur41 = 29;
    int a36 = 9;
    int out60 = 54149;
    int z18 = 73;
    int dat12 = 23431;
    int dat84 = 23;
    int b42 = 52095;
    int lo62 = 5;
    struct Point s; s.a = 10; s.b = 5;
    int h0 = 9431;
    int sv0 = 0;
    int h1 = 20;
    int sv1 = 0;
    int h2 = 47457;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        prev49 = xn[i];
        b42 = lo62 + b42;
        out60 = dat12 * 44081;
        out60 = out60 - 2;
        cur41 = out60 | prev49;
        dat84 = prev49 - dat84;
        s.a = s.a + s.b;
        yo[i] = a36;
    }
}
int main() { test_func(); return 0; }

