// RTPG_2627: vars=7 stmts=7
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int prev1 = 25;
    int v76 = 8;
    int x45 = 67;
    int cnt88 = 59582;
    int acc99 = -49;
    int v96 = 62;
    int hi86 = 34;
    struct Pair s; s.a = 16; s.b = 37617;
    int i;
    for (i = 0; i < 64; i++) {
        x45 = xn[i];
        acc99 = v96;
        x45 = hi86 - v76;
        v96 = x45 - v96;
        prev1 = v96 + v76;
        x45 = v96 - v76;
        v96 = hi86;
        v96 = v96 - 2;
        s.a = s.a + s.b;
        if (cnt88 != 60) {
        cnt88 = acc99 + v76;
        }
        yo[i] = hi86;
    }
}
int main() { test_func(); return 0; }

