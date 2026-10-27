// RTPG_5819: vars=7 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int out43 = 5;
    int v99 = 1;
    int y22 = 36931;
    int x95 = -30;
    int y76 = 9;
    int dat35 = -41;
    int out9 = 84;
    int i;
    for (i = 0; i < 64; i++) {
        x95 = xn[i];
        out43 = y76 + out9;
        y76 = out43 - 90;
        out9 = x95 + dat35;
        out43 = out43 + 3;
        yo[i] = out9;
    }
}
int main() { test_func(); return 0; }

