// RTPG_4636: vars=5 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int dat15 = 47;
    int a65 = 10;
    int out90 = 100;
    int c3 = -50;
    int c28 = 18916;
    int i;
    for (i = 0; i < 16; i++) {
        c3 = xn[i];
        c3 = c28;
        c28 = c28 + 3;
        if (c28 <= 59) {
        c3 = out90;
        }
        yo[i] = dat15;
    }
}
int main() { test_func(); return 0; }

