// RTPG_7221: vars=3 stmts=2
int xn[32];
int yo[32];
struct Pair { int a; int b; };
void test_func(void) {
    int a32 = 27291;
    int cur0 = 2;
    int z49 = 2;
    struct Pair s; s.a = 5; s.b = 33;
    int i;
    for (i = 0; i < 32; i++) {
        cur0 = xn[i];
        cur0 = a32;
        a32 = cur0 + z49;
        s.a = s.a + s.b;
        if (cur0 >= 16) {
        a32 = a32 - cur0;
        }
        yo[i] = a32;
    }
}
int main() { test_func(); return 0; }

