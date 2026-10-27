// RTPG_5760: vars=3 stmts=11
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int tmp29 = 39;
    int dat32 = 5;
    int b92 = 19062;
    struct Point s; s.a = 4; s.b = 21;
    int i;
    for (i = 0; i < 32; i++) {
        dat32 = xn[i];
        tmp29 = dat32 - b92;
        b92 = b92;
        b92 = tmp29;
        dat32 = b92 - tmp29;
        dat32 = tmp29 + tmp29;
        b92 = b92 - tmp29;
        b92 = b92 - dat32;
        dat32 = dat32 + 9;
        tmp29 = b92 - 34017;
        b92 = b92 - 3;
        dat32 = dat32 - tmp29;
        s.a = s.a + s.b;
        yo[i] = b92;
    }
}
int main() { test_func(); return 0; }

