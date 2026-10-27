// RTPG_3999: vars=7 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int val6 = 9;
    int dat51 = 90;
    int c13 = -34;
    int z66 = 60359;
    int lo63 = 32061;
    int acc48 = 61;
    int prev60 = 3;
    int h0 = 5;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        dat51 = xn[i];
        acc48 = dat51 * 36;
        dat51 = acc48 / prev60;
        acc48 = prev60 / z66;
        dat51 = dat51 - 5;
        z66 = z66 * 44980;
        dat51 = dat51 + -40;
        if (dat51 == -26) {
        c13 = c13 + dat51;
        }
        yo[i] = prev60;
    }
}
int main() { test_func(); return 0; }

