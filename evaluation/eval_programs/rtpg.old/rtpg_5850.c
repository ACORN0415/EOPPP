// RTPG_5850: vars=7 stmts=2
struct Node { int a; int b; };
void test_func(void) {
    int sum46 = 28643;
    int v2 = 27352;
    int z32 = 13;
    int out10 = 11919;
    int z85 = 39130;
    int c84 = 58300;
    int out55 = 64726;
    struct Node s; s.a = 8; s.b = -24;
    int i;
    for (i = 0; i < 99; i++) {
        v2 = v2 - 3;
        c84 = c84 + 1;
        s.a = s.a + s.b;
        if (c84 > 96) goto done;
    }
done:
    out55 = 0;
}
int main() { test_func(); return 0; }

