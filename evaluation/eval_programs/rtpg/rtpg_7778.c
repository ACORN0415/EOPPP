// RTPG_7778: vars=10 stmts=12
struct Node { int a; int b; };
void test_func(void) {
    int out18 = 58;
    int z73 = 22;
    int x14 = 15;
    int prev53 = 2;
    int acc85 = 7;
    int hi97 = -36;
    int lo81 = 6;
    int x4 = 78;
    int x50 = 20239;
    int cur97 = 81;
    struct Node s; s.a = 32; s.b = 4;
    int h0 = 100;
    int sv0 = 0;
    int h1 = -13;
    int sv1 = 0;
    int h2 = 48;
    int sv2 = 0;
    int h3 = 59988;
    int sv3 = 0;
    int i;
    for (i = 0; i < 50; i++) {
        prev53 = x4 ^ acc85;
        hi97 = z73 % lo81;
        acc85 = cur97 + x14;
        z73 = z73 - 1;
        hi97 = lo81 % x50;
        x14 = x4 + 83;
        x50 = x50 * 58756;
        x50 = out18;
        x4 = out18 % x4;
        cur97 = x4 ^ z73;
        x14 = cur97 + z73;
        x50 = hi97 * 8;
        s.a = s.a + s.b;
        if (x50 != 89) {
        acc85 = acc85 - 4;
        }
    }
}
int main() { test_func(); return 0; }

