// RTPG_7482: vars=4 stmts=5
int xn[64];
int yo[64];
struct Node { int a; int b; };
void test_func(void) {
    int prev23 = 35;
    int lo98 = -16;
    int hi59 = 6;
    int b8 = 20868;
    struct Node s; s.a = 44; s.b = 80;
    int i;
    for (i = 0; i < 64; i++) {
        b8 = xn[i];
        hi59 = b8 & lo98;
        lo98 = b8;
        lo98 = prev23 / lo98;
        hi59 = hi59 - 1;
        hi59 = b8 ^ hi59;
        s.a = s.a + s.b;
        if (prev23 != 3) {
        b8 = b8 + lo98;
        }
        yo[i] = b8;
    }
}
int main() { test_func(); return 0; }

