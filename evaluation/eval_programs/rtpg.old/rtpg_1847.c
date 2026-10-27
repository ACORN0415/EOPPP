// RTPG_1847: vars=3 stmts=2
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    int lo59 = 10;
    int v45 = 25;
    int y8 = 2502;
    struct Pair s; s.a = 43; s.b = -30;
    int i;
    for (i = 0; i < 16; i++) {
        v45 = xn[i];
        lo59 = lo59;
        v45 = y8 + 4;
        s.a = s.a + s.b;
        yo[i] = y8;
    }
}
int main() { test_func(); return 0; }

