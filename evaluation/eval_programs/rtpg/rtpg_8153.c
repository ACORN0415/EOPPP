// RTPG_8153: vars=5 stmts=7
int xn[32];
int yo[32];
enum State { SLOW, BLUE, OFF };
void test_func(void) {
    int res66 = 9;
    int z60 = 8672;
    int dat73 = 10910;
    int cur74 = 2;
    int b4 = 98;
    enum State st = SLOW;
    int h0 = 2;
    int sv0 = 0;
    int h1 = 37877;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        cur74 = xn[i];
        b4 = b4 + cur74;
        b4 = res66 * 50;
        z60 = cur74 + 24355;
        res66 = z60 + 9;
        b4 = dat73 * 47661;
        cur74 = cur74 * 1;
        dat73 = dat73 + res66;
        if (dat73 < -15) {
        z60 = z60 - 27;
        }
        yo[i] = b4;
    }
}
int main() { test_func(); return 0; }

