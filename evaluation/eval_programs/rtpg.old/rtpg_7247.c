// RTPG_7247: vars=3 stmts=2
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    int tmp62 = 7;
    int acc97 = 38;
    int dat56 = 49514;
    struct Pair s; s.a = 43; s.b = 59694;
    int i;
    for (i = 0; i < 16; i++) {
        tmp62 = xn[i];
        dat56 = tmp62 - dat56;
        acc97 = acc97 + tmp62;
        s.a = s.a + s.b;
        yo[i] = acc97;
    }
}
int main() { test_func(); return 0; }

