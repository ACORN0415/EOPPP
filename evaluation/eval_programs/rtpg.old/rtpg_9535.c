// RTPG_9535: vars=3 stmts=8
struct Node { int a; int b; };
void test_func(void) {
    int z55 = 96;
    int hi78 = 52340;
    int y14 = 7;
    struct Node s; s.a = 29; s.b = 29;
    int i;
    for (i = 0; i < 46; i++) {
        y14 = hi78 - z55;
        hi78 = y14 + 64894;
        hi78 = hi78 - 2;
        z55 = hi78;
        hi78 = y14 - 65031;
        y14 = hi78;
        hi78 = hi78;
        hi78 = y14 + hi78;
        s.a = s.a + s.b;
        if (y14 > -47) {
        hi78 = y14 - 13;
        }
    }
}
int main() { test_func(); return 0; }

