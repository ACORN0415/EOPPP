// RTPG_9921: vars=6 stmts=5
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int hi65 = 20;
    int out63 = -14;
    int tmp37 = -36;
    int prev58 = 26256;
    int c44 = 5;
    int v32 = 17;
    struct Point s; s.a = 37; s.b = 3;
    int i;
    for (i = 0; i < 32; i++) {
        out63 = xn[i];
        prev58 = prev58 - 4;
        tmp37 = hi65 + 18694;
        c44 = tmp37;
        prev58 = hi65 - v32;
        c44 = c44 + 4;
        s.a = s.a + s.b;
        if (prev58 != 93) {
        v32 = hi65 - prev58;
        }
        yo[i] = v32;
    }
}
int main() { test_func(); return 0; }

