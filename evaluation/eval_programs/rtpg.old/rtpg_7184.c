// RTPG_7184: vars=8 stmts=11
struct Node { int a; int b; };
void test_func(void) {
    int c78 = -21;
    float out60 = 20.76;
    int val4 = 10;
    float val32 = 18.82;
    int acc19 = 5;
    double x87 = 50.35;
    float y18 = 8.39;
    float b41 = 52.48;
    struct Node s; s.a = 53743; s.b = 42416;
    int i;
    for (i = 0; i < 12; i++) {
        out60 = y18 + val4;
        val32 = val32 - 1;
        val32 = y18 + val4;
        y18 = y18 + b41;
        val32 = out60;
        y18 = y18 - 2;
        x87 = x87;
        y18 = x87 - 32304;
        y18 = val4;
        acc19 = y18 - 39;
        x87 = val32 + acc19;
        s.a = s.a + s.b;
        if (c78 < 22) {
        b41 = x87 + out60;
        }
    }
}
int main() { test_func(); return 0; }

