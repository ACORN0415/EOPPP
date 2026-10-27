// RTPG_5393: vars=5 stmts=4
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int dat67 = -41;
    int out78 = 97;
    int c70 = 41;
    int c67 = 5;
    int tmp21 = 8;
    struct Point s; s.a = 36; s.b = 45354;
    int h0 = 11;
    int sv0 = 0;
    int h1 = 99;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        c70 = xn[i];
        tmp21 = tmp21 * 61244;
        c67 = c67 * 48;
        c67 = out78 * 9;
        c67 = dat67 * 74;
        s.a = s.a + s.b;
        yo[i] = out78;
    }
}
int main() { test_func(); return 0; }

