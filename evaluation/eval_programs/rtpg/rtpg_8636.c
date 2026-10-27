// RTPG_8636: vars=4 stmts=8
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    int dat24 = 49;
    int lo74 = 1;
    int v2 = 8;
    int dat6 = 44;
    struct Pair s; s.a = -41; s.b = 9;
    int h0 = 46877;
    int sv0 = 0;
    int h1 = 31;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v2 = xn[i];
        lo74 = dat6;
        dat6 = v2 * -19;
        lo74 = dat24 * 19;
        v2 = v2 - 10390;
        lo74 = lo74 - dat24;
        dat6 = dat24 - v2;
        v2 = v2 * 54317;
        lo74 = dat6 * 34987;
        s.a = s.a + s.b;
        if (dat24 <= 65) {
        dat6 = lo74;
        }
        yo[i] = lo74;
    }
}
int main() { test_func(); return 0; }

