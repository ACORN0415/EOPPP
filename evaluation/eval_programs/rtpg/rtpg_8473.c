// RTPG_8473: vars=5 stmts=8
struct Data { int a; int b; };
void test_func(void) {
    int tmp33 = 76;
    int v41 = 22073;
    int cur73 = 31;
    int x27 = 84;
    int cur69 = 8;
    struct Data s; s.a = 7; s.b = 56;
    int h0 = 50;
    int sv0 = 0;
    int h1 = 23693;
    int sv1 = 0;
    int i;
    for (i = 0; i < 8; i++) {
        cur73 = x27 * 7;
        x27 = cur69;
        cur73 = cur69 + 10;
        v41 = v41 * 21;
        cur69 = tmp33 + 19573;
        tmp33 = x27;
        tmp33 = cur73 - 42;
        cur73 = tmp33 + cur69;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

