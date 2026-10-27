// RTPG_7317: vars=3 stmts=2
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    int acc97 = 7;
    int dat56 = 38;
    int tmp62 = 49514;
    struct Pair s; s.a = 43; s.b = 59694;
    int i;
    for (i = 0; i < 16; i++) {
        acc97 = xn[i];
        tmp62 = acc97 - tmp62;
        dat56 = dat56 + acc97;
        s.a = s.a + s.b;
        yo[i] = dat56;
    }
}
int main() { test_func(); return 0; }

