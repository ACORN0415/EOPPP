// RTPG_8851: vars=3 stmts=4
int xn[16];
int yo[16];
struct Point { int a; int b; };
void test_func(void) {
    int out6 = 6;
    int hi60 = 63141;
    int val12 = 65;
    struct Point s; s.a = 10664; s.b = 1;
    int i;
    for (i = 0; i < 16; i++) {
        out6 = xn[i];
        val12 = val12 + 1;
        hi60 = val12 + out6;
        val12 = out6 + 55451;
        val12 = val12;
        s.a = s.a + s.b;
        yo[i] = out6;
    }
}
int main() { test_func(); return 0; }

