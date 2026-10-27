// RTPG_1291: vars=3 stmts=8
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    int dat52 = -21;
    int cnt86 = 36265;
    int z40 = 28106;
    struct Pair s; s.a = 19384; s.b = 23327;
    int i;
    for (i = 0; i < 16; i++) {
        z40 = xn[i];
        dat52 = dat52;
        z40 = z40;
        z40 = dat52;
        dat52 = z40 - cnt86;
        z40 = dat52;
        cnt86 = dat52 + cnt86;
        z40 = z40;
        z40 = z40 + 2;
        s.a = s.a + s.b;
        if (cnt86 != -32) {
        z40 = dat52;
        }
        yo[i] = dat52;
    }
}
int main() { test_func(); return 0; }

