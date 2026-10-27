// RTPG_2982: vars=6 stmts=3
struct Node { int a; int b; };
void test_func(void) {
    int z7 = -48;
    int z88 = 41;
    int v92 = 23713;
    int acc45 = 57829;
    int out28 = 60;
    int lo31 = 43;
    struct Node s; s.a = 9; s.b = 4;
    int i;
    for (i = 0; i < 90; i++) {
        v92 = out28 - v92;
        lo31 = lo31 & z88;
        z7 = acc45 & out28;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

