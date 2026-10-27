// RTPG_9509: vars=8 stmts=5
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int x91 = 0;
    int b29 = 30;
    int val13 = 10;
    int v15 = 33;
    int lo50 = 91;
    int cur79 = -19;
    int acc83 = 3;
    int out72 = 92;
    struct Data s; s.a = 2; s.b = 64;
    int i;
    for (i = 0; i < 64; i++) {
        v15 = xn[i];
        b29 = b29;
        out72 = out72 + out72;
        v15 = val13;
        lo50 = v15 + val13;
        b29 = acc83;
        s.a = s.a + s.b;
        if (lo50 < 81) {
        cur79 = lo50 - out72;
        }
        yo[i] = val13;
    }
}
int main() { test_func(); return 0; }

