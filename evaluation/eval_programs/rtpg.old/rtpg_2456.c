// RTPG_2456: vars=8 stmts=2
int xn[64];
int yo[64];
struct Data { int a; int b; };
enum State { FAST, BLUE, OFF };
void test_func(void) {
    int v87 = 18555;
    int res37 = 47;
    int sum18 = 89;
    int y71 = 45282;
    int sum28 = 12;
    int b92 = -19;
    int dat0 = -28;
    int prev22 = 21;
    struct Data s; s.a = -19; s.b = 24790;
    enum State st = FAST;
    int h0 = 3;
    int sv0 = 0;
    int h1 = 54364;
    int sv1 = 0;
    int h2 = -20;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        b92 = xn[i];
        b92 = res37 - prev22;
        sum18 = sum18 - 3;
        s.a = s.a + s.b;
        if (sum18 != -30) {
        prev22 = v87 - res37;
        }
        yo[i] = v87;
    }
}
int main() { test_func(); return 0; }

