// RTPG_4030: vars=7 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int prev60 = 9;
    int acc48 = 90;
    int dat51 = -34;
    int lo63 = 60359;
    int z66 = 32061;
    int val6 = 61;
    int c13 = 3;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        acc48 = xn[i];
        val6 = acc48 * 36;
        acc48 = val6 % prev60;
        val6 = c13 / lo63;
        acc48 = acc48 - 5;
        lo63 = lo63 * 44980;
        acc48 = acc48 + -40;
        if (acc48 == -26) {
        dat51 = dat51 + acc48;
        }
        yo[i] = c13;
    }
}
int main() { test_func(); return 0; }

