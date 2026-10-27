// RTPG_3811: vars=5 stmts=3
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    int tmp87 = 80;
    int tmp54 = 19;
    int lo67 = 44;
    int cnt68 = 9;
    int sum9 = 56;
    struct Pair s; s.a = -3; s.b = 0;
    int i;
    for (i = 0; i < 16; i++) {
        lo67 = xn[i];
        sum9 = lo67 - -3;
        tmp54 = tmp54 + tmp87;
        sum9 = tmp87 - lo67;
        s.a = s.a + s.b;
        yo[i] = cnt68;
    }
}
int main() { test_func(); return 0; }

