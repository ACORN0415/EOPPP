// RTPG_9027: vars=10 stmts=2
int xn[64];
int yo[64];
struct Data { int a; int b; };
void test_func(void) {
    int val0 = 22282;
    int x59 = 28720;
    int b61 = -37;
    int z24 = 54540;
    int acc38 = -12;
    int c69 = 7;
    int out75 = 93;
    int val6 = 12;
    int cnt87 = -27;
    int c35 = 14;
    struct Data s; s.a = 59; s.b = 3;
    int i;
    for (i = 0; i < 64; i++) {
        b61 = xn[i];
        val0 = out75 + z24;
        out75 = out75 - 5;
        s.a = s.a + s.b;
        yo[i] = z24;
    }
}
int main() { test_func(); return 0; }

