// RTPG_4309: vars=10 stmts=12
int xn[32];
int yo[32];
void test_func(void) {
    int out30 = 82;
    int hi95 = 2;
    int res36 = -37;
    int b15 = 25;
    int out90 = 76;
    int val12 = 6;
    int a4 = 10;
    int dat28 = 3;
    int lo42 = -23;
    int tmp71 = -30;
    int h0 = -35;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        a4 = xn[i];
        hi95 = out30 * 8;
        tmp71 = a4 / res36;
        lo42 = a4 - hi95;
        val12 = lo42 | a4;
        out90 = out30 - val12;
        b15 = b15 + 2;
        b15 = val12 ^ res36;
        b15 = b15 + dat28;
        a4 = hi95 & a4;
        out90 = lo42 - out90;
        val12 = res36;
        lo42 = res36 + lo42;
        yo[i] = dat28;
    }
}
int main() { test_func(); return 0; }

