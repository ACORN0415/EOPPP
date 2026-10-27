// RTPG_6338: vars=7 stmts=3
struct Pair { int a; int b; };
void test_func(void) {
    int z16 = -40;
    int acc80 = 39291;
    int acc74 = 84;
    int cnt76 = 4;
    int a11 = 13;
    int lo29 = 9;
    int tmp96 = -34;
    struct Pair s; s.a = 7; s.b = 13;
    int i;
    for (i = 0; i < 38; i++) {
        acc80 = a11;
        a11 = tmp96 + a11;
        acc80 = a11 + z16;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

