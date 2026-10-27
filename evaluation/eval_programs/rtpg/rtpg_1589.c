// RTPG_1589: vars=8 stmts=4
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int val71 = 4;
    int out98 = 10;
    int hi2 = 7;
    int dat8 = 74;
    int tmp81 = 3;
    int c39 = 4;
    int sum73 = 5;
    int val69 = 22660;
    struct Point s; s.a = 10; s.b = 97;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        hi2 = xn[i];
        val71 = dat8 * -18;
        val71 = val71 - 1;
        c39 = c39 - 8;
        out98 = c39 + sum73;
        s.a = s.a + s.b;
        if (hi2 > 25744) goto done;
        yo[i] = val71;
    }
done:
    tmp81 = 0;
}
int main() { test_func(); return 0; }

