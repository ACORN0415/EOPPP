// RTPG_2027: vars=4 stmts=7
struct Pair { int a; int b; };
void test_func(void) {
    int val90 = 4;
    int z19 = 40447;
    int acc70 = 26846;
    int v98 = 42974;
    struct Pair s; s.a = 4; s.b = 8;
    int i;
    for (i = 0; i < 69; i++) {
        acc70 = v98;
        z19 = v98 + v98;
        acc70 = val90;
        val90 = val90 - z19;
        v98 = val90 - acc70;
        z19 = z19 - acc70;
        val90 = val90 - z19;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

