// RTPG_1546: vars=3 stmts=5
int xn[64];
int yo[64];
struct Node { int a; int b; };
enum State { ON, GREEN, SLOW };
void test_func(void) {
    int z4 = -34;
    int c21 = 39;
    int hi45 = 20;
    struct Node s; s.a = 86; s.b = 39599;
    enum State st = ON;
    int i;
    for (i = 0; i < 64; i++) {
        z4 = xn[i];
        hi45 = hi45;
        c21 = hi45;
        hi45 = z4 + c21;
        hi45 = hi45 + 2;
        z4 = hi45;
        s.a = s.a + s.b;
        if (hi45 == 16) {
        hi45 = c21;
        }
        yo[i] = hi45;
    }
}
int main() { test_func(); return 0; }

