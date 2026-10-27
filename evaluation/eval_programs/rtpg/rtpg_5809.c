// RTPG_5809: vars=7 stmts=2
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int z75 = -19;
    int dat37 = 100;
    int sum61 = 62855;
    int tmp31 = 64;
    int tmp13 = 5;
    int res64 = 57103;
    int y88 = 2;
    struct Point s; s.a = 0; s.b = 12619;
    int *ptr = &sum61;
    int h0 = 3;
    int sv0 = 0;
    int h1 = -41;
    int sv1 = 0;
    int h2 = 24833;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        res64 = xn[i];
        dat37 = dat37 - 4;
        res64 = tmp31 * 2;
        *ptr = *ptr + 1;
        s.a = s.a + s.b;
        yo[i] = z75;
    }
}
int main() { test_func(); return 0; }

