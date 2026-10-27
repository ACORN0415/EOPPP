// RTPG_2551: vars=4 stmts=5
struct Pair { int a; int b; };
void test_func(void) {
    int dat2 = 5;
    int a87 = 9;
    int z73 = 23;
    int a24 = 7947;
    struct Pair s; s.a = 55587; s.b = 17;
    int i;
    for (i = 0; i < 84; i++) {
        a87 = a87 + 2;
        z73 = a24 - dat2;
        a24 = a24 - -35;
        a87 = a87 + 3;
        dat2 = a24 + z73;
        s.a = s.a + s.b;
        if (a87 <= -17) {
        a87 = dat2 + a87;
        }
    }
}
int main() { test_func(); return 0; }

