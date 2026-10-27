// RTPG_2083: vars=3 stmts=4
int xn[32];
int yo[32];
struct Node { int a; int b; };
void test_func(void) {
    int hi65 = 1816;
    int lo4 = 1;
    int cur61 = 54;
    struct Node s; s.a = 36954; s.b = 1539;
    int h0 = 16;
    int sv0 = 0;
    int h1 = 36293;
    int sv1 = 0;
    int i;
    for (i = 0; i < 37; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        cur61 = cur61 + 5;
        hi65 = hi65 + 3;
        hi65 = cur61 - 85;
        lo4 = hi65 - 8;
        }
    }
}
int main() { test_func(); return 0; }

