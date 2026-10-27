// RTPG_4819: vars=8 stmts=4
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int tmp74 = 52771;
    int c21 = 8;
    int v69 = -46;
    int res79 = 27;
    int y9 = 24811;
    int z28 = 1;
    int z60 = 49;
    int dat56 = 10;
    struct Pair s; s.a = -10; s.b = 8205;
    int i;
    for (i = 0; i < 64; i++) {
        c21 = xn[i];
        z28 = res79 + z28;
        y9 = tmp74;
        y9 = y9 + 2;
        dat56 = y9 - -24;
        s.a = s.a + s.b;
        if (tmp74 != 25) {
        res79 = dat56 - y9;
        }
        yo[i] = v69;
    }
}
int main() { test_func(); return 0; }

