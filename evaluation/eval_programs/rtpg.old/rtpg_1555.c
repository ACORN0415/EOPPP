// RTPG_1555: vars=3 stmts=4
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    int v39 = 67;
    int x77 = 1;
    int v22 = 7706;
    struct Pair s; s.a = 6617; s.b = 25;
    int h0 = 30833;
    int sv0 = 0;
    int h1 = 31;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v22 = xn[i];
        x77 = v39 + 14831;
        v22 = x77 - v39;
        v39 = x77 - 33;
        v22 = v22 - 1;
        s.a = s.a + s.b;
        if (v22 == 2) {
        v39 = v39 + 3;
        }
        yo[i] = x77;
    }
}
int main() { test_func(); return 0; }

