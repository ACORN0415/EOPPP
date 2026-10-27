// RTPG_9706: vars=8 stmts=5
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int x91 = 0;
    int lo50 = 30;
    int v15 = 10;
    int out72 = 33;
    int b29 = 91;
    int val13 = -19;
    int cur79 = 3;
    int acc83 = 92;
    struct Data s; s.a = 2; s.b = 64;
    int i;
    for (i = 0; i < 64; i++) {
        out72 = xn[i];
        lo50 = lo50;
        acc83 = acc83 + acc83;
        out72 = v15;
        b29 = out72 + v15;
        lo50 = cur79;
        s.a = s.a + s.b;
        if (b29 < 81) {
        val13 = b29 - acc83;
        }
        yo[i] = v15;
    }
}
int main() { test_func(); return 0; }

