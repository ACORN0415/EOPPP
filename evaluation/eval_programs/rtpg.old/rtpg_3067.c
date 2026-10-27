// RTPG_3067: vars=5 stmts=3
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int lo26 = 21;
    int acc98 = 36805;
    int c82 = 1;
    int res98 = 3;
    int lo2 = 21;
    struct Point s; s.a = 84; s.b = 25;
    int i;
    for (i = 0; i < 16; i++) {
        lo26 = xn[i];
        c82 = c82;
        acc98 = res98 - 37204;
        res98 = res98 + 5;
        s.a = s.a + s.b;
        if (lo26 >= 80) {
        lo26 = lo26 + 3;
        }
        yo[i] = res98;
    }
}
int main() { test_func(); return 0; }

