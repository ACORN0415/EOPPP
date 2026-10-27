// RTPG_9350: vars=6 stmts=6
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int cnt89 = 55208;
    int x90 = 24;
    int val62 = 24;
    int out1 = 5;
    int out50 = -34;
    int v72 = -42;
    struct Point s; s.a = 48833; s.b = 5;
    int i;
    for (i = 0; i < 32; i++) {
        v72 = xn[i];
        cnt89 = out1;
        out1 = x90;
        v72 = val62 | v72;
        out1 = out50 % out1;
        out50 = out50 - out1;
        v72 = out50;
        s.a = s.a + s.b;
        yo[i] = val62;
    }
}
int main() { test_func(); return 0; }

