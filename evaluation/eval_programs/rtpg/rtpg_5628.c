// RTPG_5628: vars=13 stmts=5
enum State { BLUE, SLOW, OFF };
void test_func(void) {
    int v64 = 3;
    int prev77 = 42;
    int a63 = 9;
    int lo45 = 4;
    int out6 = 7;
    int prev27 = 16;
    int b12 = 9;
    int x80 = 42;
    int hi77 = 10;
    int out21 = -14;
    int cnt46 = -27;
    int cnt26 = 13;
    int b99 = 18;
    enum State st = BLUE;
    int i;
    for (i = 0; i < 44; i++) {
        prev77 = prev77 + 1;
        cnt26 = cnt26 & prev27;
        b12 = b99 | out21;
        a63 = a63 + 5;
        x80 = x80;
        if (prev77 == -9) {
        lo45 = prev77 - out6;
        }
    }
}
int main() { test_func(); return 0; }

