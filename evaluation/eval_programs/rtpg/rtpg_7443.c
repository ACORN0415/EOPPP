// RTPG_7443: vars=4 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int c66 = -19;
    int dat99 = 64525;
    int c48 = 69;
    int hi3 = -20;
    int i;
    for (i = 0; i < 16; i++) {
        hi3 = xn[i];
        dat99 = hi3 + 44746;
        dat99 = dat99;
        dat99 = c66;
        c48 = dat99;
        c66 = c66 - c48;
        yo[i] = c66;
    }
}
int main() { test_func(); return 0; }

