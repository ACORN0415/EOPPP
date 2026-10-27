// RTPG_2098: vars=10 stmts=7
int xn[16];
int yo[16];
struct Node { int a; int b; };
void test_func(void) {
    int out0 = 89;
    double cnt86 = 20.13;
    float val21 = 27.02;
    int a64 = 20973;
    double tmp8 = 69.15;
    int b91 = 7;
    float sum67 = 40.41;
    int dat64 = -40;
    int v70 = 7;
    float lo10 = 5.00;
    struct Node s; s.a = 9; s.b = 50;
    int i;
    for (i = 0; i < 16; i++) {
        sum67 = xn[i];
        a64 = v70 - 16;
        cnt86 = cnt86 - tmp8;
        a64 = dat64 + cnt86;
        b91 = dat64 + 10;
        lo10 = cnt86 - b91;
        val21 = lo10 + b91;
        cnt86 = val21 + out0;
        s.a = s.a + s.b;
        yo[i] = val21;
    }
}
int main() { test_func(); return 0; }

