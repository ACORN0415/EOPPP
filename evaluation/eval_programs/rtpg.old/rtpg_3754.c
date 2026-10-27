// RTPG_3754: vars=16 stmts=7
int xn[64];
int yo[64];
void test_func(void) {
    int hi25 = 1485;
    int y67 = 3;
    int v34 = 60313;
    int v37 = 12;
    int cur28 = 10;
    int out37 = 96;
    int b70 = 41;
    int acc16 = -4;
    int cur55 = 8;
    int cnt39 = -30;
    int val18 = 0;
    int res11 = 50;
    int lo47 = 37;
    int acc68 = 91;
    int out29 = 35529;
    int c79 = 60;
    int i;
    for (i = 0; i < 64; i++) {
        y67 = xn[i];
        cur55 = cur55 ^ v34;
        cnt39 = acc16 / cur28;
        lo47 = cnt39 ^ hi25;
        acc16 = cur28;
        v37 = v37 + -47;
        val18 = acc16 + v37;
        acc16 = hi25 - 6;
        yo[i] = b70;
    }
}
int main() { test_func(); return 0; }

