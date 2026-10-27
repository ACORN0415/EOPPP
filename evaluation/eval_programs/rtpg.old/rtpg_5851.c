// RTPG_5851: vars=3 stmts=4
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int a61 = 36;
    int b79 = 14;
    int x23 = 15;
    struct Pair s; s.a = -45; s.b = -8;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 69;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        b79 = xn[i];
        x23 = x23 * 49;
        a61 = b79;
        a61 = x23 * 30531;
        a61 = b79 * 5;
        s.a = s.a + s.b;
        if (a61 >= 98) {
        x23 = b79 - x23;
        }
        yo[i] = x23;
    }
}
int main() { test_func(); return 0; }

