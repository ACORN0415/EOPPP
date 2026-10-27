// RTPG_3920: vars=18 stmts=5
int xn[32];
int yo[32];
struct Data { int a; int b; };
void test_func(void) {
    int tmp98 = 71;
    int y6 = 32;
    int c32 = 63;
    int dat91 = 51;
    int c74 = -26;
    int val73 = -28;
    int z37 = 35080;
    int prev92 = -8;
    int prev38 = 3;
    int hi83 = 63892;
    int v90 = 31030;
    int val3 = 5;
    int lo85 = 7;
    int val78 = 6;
    int acc45 = 49762;
    int out33 = 3;
    int prev11 = 2;
    int prev21 = 22587;
    struct Data s; s.a = 3; s.b = 1;
    int i;
    for (i = 0; i < 32; i++) {
        prev38 = xn[i];
        y6 = val73 + hi83;
        acc45 = acc45 + 5;
        c74 = prev38 - acc45;
        hi83 = lo85 - out33;
        hi83 = hi83 + 2;
        s.a = s.a + s.b;
        yo[i] = v90;
    }
}
int main() { test_func(); return 0; }

