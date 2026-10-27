// RTPG_3387: vars=6 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int out92 = 50;
    int y92 = 2;
    int z11 = 7;
    int cnt0 = 6;
    int dat57 = 44372;
    int cnt33 = 2;
    int *ptr = &z11;
    int i;
    for (i = 0; i < 16; i++) {
        cnt0 = xn[i];
        dat57 = y92 - -16;
        y92 = out92 - dat57;
        z11 = y92 & cnt0;
        cnt0 = z11 - out92;
        *ptr = *ptr + 3;
        yo[i] = cnt33;
    }
}
int main() { test_func(); return 0; }

