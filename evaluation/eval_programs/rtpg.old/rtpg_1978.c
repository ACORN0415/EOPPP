// RTPG_1978: vars=9 stmts=5
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int hi53 = 64486;
    int res27 = 50931;
    int c27 = 83;
    int v16 = -10;
    int hi80 = 10;
    int lo29 = 4;
    int b10 = 10;
    int a31 = 47138;
    int z72 = 1;
    struct Point s; s.a = 5; s.b = 8;
    int i;
    for (i = 0; i < 32; i++) {
        c27 = xn[i];
        v16 = c27 - hi80;
        b10 = res27 / lo29;
        c27 = hi80 - v16;
        lo29 = hi53 - v16;
        v16 = lo29 / c27;
        s.a = s.a + s.b;
        yo[i] = hi53;
    }
}
int main() { test_func(); return 0; }

