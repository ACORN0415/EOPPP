// RTPG_3693: vars=3 stmts=8
int xn[16];
int yo[16];
struct Data { int a; int b; };
void test_func(void) {
    int b47 = 2;
    int hi74 = 26;
    int res15 = 55577;
    struct Data s; s.a = 5; s.b = -2;
    int i;
    for (i = 0; i < 16; i++) {
        hi74 = xn[i];
        b47 = res15;
        res15 = hi74 - b47;
        b47 = hi74 + b47;
        b47 = hi74 - 27705;
        hi74 = res15;
        hi74 = hi74 + 1;
        hi74 = b47;
        res15 = hi74;
        s.a = s.a + s.b;
        if (hi74 != 36) {
        b47 = b47 + res15;
        }
        yo[i] = res15;
    }
}
int main() { test_func(); return 0; }

