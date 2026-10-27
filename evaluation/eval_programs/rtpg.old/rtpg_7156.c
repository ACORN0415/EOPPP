// RTPG_7156: vars=3 stmts=2
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    int cur0 = 27291;
    int a32 = 2;
    int z49 = 2;
    struct Pair s; s.a = 5; s.b = 33;
    int i;
    for (i = 0; i < 32; i++) {
        a32 = xn[i];
        a32 = cur0;
        cur0 = a32 + z49;
        s.a = s.a + s.b;
        if (a32 >= 16) {
        cur0 = cur0 - a32;
        }
        yo[i] = cur0;
    }
}
int main() { test_func(); return 0; }

