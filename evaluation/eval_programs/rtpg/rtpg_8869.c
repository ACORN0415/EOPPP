// RTPG_8869: vars=4 stmts=7
struct Data { int a; int b; };
void test_func(void) {
    int a87 = 0;
    int out52 = -5;
    int v59 = -11;
    int cur77 = 21;
    struct Data s; s.a = 53; s.b = 31122;
    int i;
    for (i = 0; i < 11; i++) {
        a87 = v59 - a87;
        v59 = a87 + v59;
        a87 = v59 - -49;
        v59 = v59 + 2;
        v59 = cur77 - out52;
        a87 = a87 - 4;
        out52 = out52 + 8;
        s.a = s.a + s.b;
        if (v59 > -24) {
        out52 = cur77;
        }
    }
}
int main() { test_func(); return 0; }

