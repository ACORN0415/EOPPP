// RTPG_8892: vars=4 stmts=3
int xn[64];
int yo[64];
struct Point { int a; int b; };
void test_func(void) {
    int out42 = 6;
    int dat88 = 80;
    int prev95 = 42;
    int c41 = 18;
    struct Point s; s.a = 1; s.b = 25;
    int i;
    for (i = 0; i < 64; i++) {
        prev95 = xn[i];
        prev95 = out42 - c41;
        dat88 = c41 % dat88;
        dat88 = out42 + prev95;
        s.a = s.a + s.b;
        yo[i] = dat88;
    }
}
int main() { test_func(); return 0; }

