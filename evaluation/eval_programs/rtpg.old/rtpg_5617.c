// RTPG_5617: vars=4 stmts=11
int xn[32];
int yo[32];
struct Point { int a; int b; };
void test_func(void) {
    int prev42 = 25724;
    int x31 = 9;
    int val19 = -50;
    int cur26 = 2;
    struct Point s; s.a = 28; s.b = 17808;
    int *ptr = &x31;
    int i;
    for (i = 0; i < 32; i++) {
        cur26 = xn[i];
        val19 = prev42 + 25030;
        prev42 = prev42;
        prev42 = prev42 - 3;
        prev42 = cur26 + 7;
        x31 = x31;
        x31 = x31 + 44333;
        val19 = x31;
        x31 = x31;
        x31 = cur26 - x31;
        val19 = x31 - prev42;
        cur26 = cur26 + 4;
        *ptr = *ptr + 5;
        s.a = s.a + s.b;
        if (val19 > -5) {
        cur26 = cur26 + 3;
        }
        yo[i] = prev42;
    }
}
int main() { test_func(); return 0; }

