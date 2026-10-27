// RTPG_1604: vars=7 stmts=5
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int hi19 = 46338;
    int x3 = 28;
    int c15 = -9;
    int x64 = 27;
    int x11 = -46;
    int sum73 = 33;
    int res21 = -46;
    struct Data s; s.a = 14412; s.b = 55133;
    int *ptr = &c15;
    int i;
    for (i = 0; i < 64; i++) {
        hi19 = xn[i];
        x11 = x11 - 2;
        x64 = x11;
        x11 = x3 - x11;
        x64 = x11 + 23;
        c15 = x64 + c15;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        yo[i] = x3;
    }
}
int main() { test_func(); return 0; }

