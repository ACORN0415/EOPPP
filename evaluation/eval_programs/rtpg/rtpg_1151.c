// RTPG_1151: vars=8 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int dat0 = 43065;
    int val99 = 82;
    int out91 = 60412;
    int val52 = 59576;
    int hi63 = -9;
    int c93 = 6;
    int hi22 = 28046;
    int val96 = 4;
    int i;
    for (i = 0; i < 16; i++) {
        c93 = xn[i];
        val52 = val52 + 3;
        out91 = val96 - c93;
        val99 = out91 + val96;
        dat0 = out91 - 60;
        val96 = val96 - 5;
        val96 = val96 - c93;
        if (val96 == -44) {
        dat0 = c93 + out91;
        }
        yo[i] = dat0;
    }
}
int main() { test_func(); return 0; }

