// RTPG_143: vars=4 stmts=8
struct Pair { int a; int b; };
void test_func(void) {
    int z20 = 3;
    int a12 = 15528;
    int cur39 = 0;
    int y23 = 13171;
    struct Pair s; s.a = 0; s.b = 3;
    int i;
    for (i = 0; i < 34; i++) {
        z20 = cur39 + z20;
        a12 = y23;
        z20 = z20 - 1;
        z20 = a12 + y23;
        cur39 = cur39 - cur39;
        cur39 = z20 + a12;
        y23 = a12;
        cur39 = cur39 + 1;
        s.a = s.a + s.b;
        if (z20 >= -8) {
        y23 = y23 + 4;
        }
    }
}
int main() { test_func(); return 0; }

