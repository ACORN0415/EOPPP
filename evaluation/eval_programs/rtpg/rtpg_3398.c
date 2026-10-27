// RTPG_3398: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int dat57 = 50;
    int y92 = 2;
    int z11 = 7;
    int cnt33 = 6;
    int out92 = 44372;
    int cnt0 = 2;
    int *ptr = &z11;
    int i;
    for (i = 0; i < 16; i++) {
        cnt33 = xn[i];
        out92 = y92 - -16;
        y92 = dat57 - out92;
        z11 = y92 & out92;
        cnt33 = z11 - dat57;
        *ptr = *ptr + 3;
        yo[i] = cnt0;
    }
}
int main() { test_func(); return 0; }

