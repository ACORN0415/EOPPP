// RTPG_3220: vars=3 stmts=7
struct Pair { int a; int b; };
void test_func(void) {
    int v62 = 1;
    int out74 = 6;
    int z56 = 5;
    struct Pair s; s.a = 65480; s.b = 6;
    int i;
    for (i = 0; i < 13; i++) {
        out74 = out74 - 22324;
        z56 = z56 - 1;
        v62 = z56;
        out74 = out74 - 4;
        out74 = z56 + out74;
        z56 = v62 + out74;
        v62 = out74 - -31;
        s.a = s.a + s.b;
        if (v62 >= -32) {
        v62 = out74;
        }
    }
}
int main() { test_func(); return 0; }

