// RTPG_5344: vars=9 stmts=3
struct Node { int a; int b; };
void test_func(void) {
    int tmp99 = 6;
    int acc63 = 19;
    int prev52 = 5;
    int a18 = 0;
    int x61 = 48;
    int v91 = 0;
    int val73 = 10;
    int dat65 = 35;
    int z82 = 92;
    struct Node s; s.a = 9; s.b = 34862;
    int i;
    for (i = 0; i < 32; i++) {
        v91 = v91 - 1;
        val73 = x61 - v91;
        dat65 = dat65 + 2;
        s.a = s.a + s.b;
        if (a18 > 9) goto done;
        if (dat65 != -27) {
        x61 = acc63 + z82;
        }
    }
done:
    tmp99 = 0;
}
int main() { test_func(); return 0; }

