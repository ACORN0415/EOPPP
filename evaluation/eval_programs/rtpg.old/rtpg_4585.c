// RTPG_4585: vars=5 stmts=2
int xn[16];
int yo[16];
void test_func(void) {
    int dat15 = 47;
    int a65 = 10;
    int c3 = 100;
    int out90 = -50;
    int c28 = 18916;
    int i;
    for (i = 0; i < 16; i++) {
        out90 = xn[i];
        out90 = c28;
        c28 = c28 + 3;
        if (c28 <= 59) {
        out90 = c3;
        }
        yo[i] = dat15;
    }
}
int main() { test_func(); return 0; }

