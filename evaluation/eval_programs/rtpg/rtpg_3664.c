// RTPG_3664: vars=8 stmts=5
struct Data { int a; int b; };
enum State { SLOW, BLUE, OFF };
void test_func(void) {
    int sum22 = 35;
    int dat40 = 322;
    int hi73 = 76;
    int res27 = 8;
    int out52 = 27992;
    int out50 = 24548;
    int y45 = 10320;
    int cur80 = -40;
    struct Data s; s.a = -9; s.b = 61085;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 15; i++) {
        dat40 = cur80 + out50;
        dat40 = dat40 + 3;
        cur80 = y45 - sum22;
        hi73 = sum22 + dat40;
        out50 = hi73 / out52;
        s.a = s.a + s.b;
    }
}
int main() { test_func(); return 0; }

