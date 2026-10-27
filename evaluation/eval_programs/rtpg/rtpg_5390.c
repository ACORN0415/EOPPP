// RTPG_5390: vars=8 stmts=2
int xn[32];
int yo[32];
struct Point { int a; int b; };
enum State { ON, SLOW, BLUE };
void test_func(void) {
    int c81 = 84;
    int tmp16 = 18;
    int sum61 = 7;
    int tmp94 = 41;
    int c39 = 19;
    int prev54 = 42;
    int acc98 = 31;
    int prev87 = 64242;
    struct Point s; s.a = -46; s.b = 520;
    enum State st = ON;
    int i;
    for (i = 0; i < 32; i++) {
        c81 = xn[i];
        sum61 = c39 - prev87;
        c39 = acc98 - sum61;
        s.a = s.a + s.b;
        if (prev87 > 5453) goto done;
        yo[i] = tmp94;
    }
done:
    prev87 = 0;
}
int main() { test_func(); return 0; }

