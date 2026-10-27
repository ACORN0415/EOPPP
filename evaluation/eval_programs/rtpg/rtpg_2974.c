// RTPG_2974: vars=6 stmts=3
struct Node { int a; int b; };
void test_func(void) {
    int z88 = -48;
    int z7 = 41;
    int v92 = 23713;
    int lo31 = 57829;
    int acc45 = 60;
    int out28 = 43;
    struct Node s; s.a = 9; s.b = 4;
    int i;
    for (i = 0; i < 90; i++) {
        v92 = acc45 - v92;
        out28 = out28 & z7;
        z88 = lo31 & out28;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

