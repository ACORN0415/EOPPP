// RTPG_1948: vars=4 stmts=8
int xn[16];
int yo[16];
struct Pair { int a; int b; };
void test_func(void) {
    int cur11 = 13;
    int cnt36 = -44;
    int sum67 = 5;
    int y29 = 2;
    struct Pair s; s.a = 5; s.b = 43;
    int i;
    for (i = 0; i < 16; i++) {
        sum67 = xn[i];
        sum67 = cur11;
        cur11 = y29;
        y29 = y29 - 1;
        y29 = y29 + 4;
        y29 = y29 - cnt36;
        sum67 = sum67;
        y29 = cur11 - sum67;
        y29 = y29 - -22;
        s.a = s.a + s.b;
        yo[i] = cnt36;
    }
}
int main() { test_func(); return 0; }

