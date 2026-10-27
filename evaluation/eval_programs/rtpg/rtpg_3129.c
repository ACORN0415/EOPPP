// RTPG_3129: vars=22 stmts=8
int xn[64];
int yo[64];
enum State { SLOW, FAST, OFF };
void test_func(void) {
    int x59 = 73;
    int out41 = 8;
    int hi29 = 51;
    int x15 = 6;
    int dat57 = 91;
    int val81 = 97;
    int dat36 = 2;
    int tmp17 = 1;
    int prev66 = -6;
    int hi96 = 46;
    int c23 = 2;
    int prev94 = 39;
    int a34 = -3;
    int acc91 = 8;
    int v5 = 39;
    int y75 = 53;
    int out86 = 63;
    int cur85 = 6;
    int hi88 = 58505;
    int c87 = 16;
    int cur69 = 30;
    int dat87 = 59336;
    enum State st = SLOW;
    int i;
    for (i = 0; i < 64; i++) {
        acc91 = xn[i];
        dat57 = hi29 % hi96;
        out41 = hi88 & dat36;
        y75 = v5;
        hi29 = a34;
        c87 = hi29 | out41;
        v5 = acc91 | v5;
        dat36 = cur85;
        dat57 = c23 - hi88;
        yo[i] = cur85;
    }
}
int main() { test_func(); return 0; }

