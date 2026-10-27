// RTPG_89: vars=9 stmts=8
int xn[64];
int yo[64];
struct Pair { int a; int b; };
void test_func(void) {
    int v39 = 5;
    int c66 = -47;
    int cnt20 = 19;
    double a20 = 89.72;
    float x63 = 11.24;
    int b94 = 6;
    int cnt22 = 17;
    int cur79 = 62625;
    int c46 = -25;
    struct Pair s; s.a = 2; s.b = -14;
    int i;
    for (i = 0; i < 64; i++) {
        a20 = xn[i];
        x63 = x63 - 35;
        b94 = b94 + cnt20;
        cnt22 = a20 + v39;
        cnt20 = a20 + cnt22;
        b94 = cur79 - b94;
        a20 = a20 - 4;
        a20 = x63 + cur79;
        x63 = x63 - 3;
        s.a = s.a + s.b;
        yo[i] = cnt20;
    }
}
int main() { test_func(); return 0; }

