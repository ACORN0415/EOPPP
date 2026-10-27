// RTPG_3016: vars=5 stmts=5
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int c31 = 1;
    int out18 = 7;
    int b74 = 46;
    int prev57 = 41388;
    int z80 = 4;
    struct Pair s; s.a = 38; s.b = 28;
    int h0 = 6;
    int sv0 = 0;
    int h1 = -42;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        out18 = xn[i];
        b74 = prev57 * 14402;
        z80 = b74;
        b74 = c31 * 7;
        b74 = c31 - b74;
        out18 = z80 + out18;
        s.a = s.a + s.b;
        yo[i] = prev57;
    }
}
int main() { test_func(); return 0; }

