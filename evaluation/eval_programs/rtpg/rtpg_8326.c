// RTPG_8326: vars=4 stmts=10
int xn[16];
int yo[16];
void test_func(void) {
    int dat30 = 2145;
    int hi90 = 78;
    int out34 = 67;
    int y75 = 2;
    int i;
    for (i = 0; i < 16; i++) {
        y75 = xn[i];
        out34 = out34;
        out34 = dat30 - hi90;
        out34 = hi90 - hi90;
        y75 = hi90 - -4;
        hi90 = y75 + hi90;
        y75 = y75 + -3;
        hi90 = hi90 - dat30;
        out34 = y75;
        hi90 = dat30 + hi90;
        y75 = y75 - 2;
        if (hi90 >= 42) {
        y75 = dat30;
        }
        yo[i] = hi90;
    }
}
int main() { test_func(); return 0; }

