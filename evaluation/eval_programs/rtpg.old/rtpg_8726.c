// RTPG_8726: vars=4 stmts=7
struct Data { int a; int b; };
void test_func(void) {
    int a87 = 0;
    int cur77 = -5;
    int out52 = -11;
    int v59 = 21;
    struct Data s; s.a = 53; s.b = 31122;
    int i;
    for (i = 0; i < 11; i++) {
        a87 = out52 - a87;
        out52 = a87 + out52;
        a87 = out52 - -49;
        out52 = out52 + 2;
        out52 = v59 - cur77;
        a87 = a87 - 4;
        cur77 = cur77 + 8;
        s.a = s.a + s.b;
        if (out52 > -24) {
        cur77 = v59;
        }
    }
}
int main() { test_func(); return 0; }

