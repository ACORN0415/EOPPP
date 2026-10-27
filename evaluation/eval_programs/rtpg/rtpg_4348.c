// RTPG_4348: vars=4 stmts=11
int xn[64];
int yo[64];
void test_func(void) {
    int dat84 = 2;
    int dat64 = 1;
    int c72 = 51746;
    int prev7 = -36;
    int *ptr = &c72;
    int i;
    for (i = 0; i < 64; i++) {
        prev7 = xn[i];
        c72 = c72 - dat64;
        dat84 = dat64 & dat84;
        dat64 = c72;
        prev7 = dat84 | dat64;
        dat64 = c72 % dat84;
        dat64 = dat64 - 32;
        dat64 = prev7;
        dat64 = dat84;
        dat84 = prev7 % dat84;
        dat64 = c72 & dat64;
        prev7 = c72 - dat84;
        *ptr = *ptr + 4;
        yo[i] = prev7;
    }
}
int main() { test_func(); return 0; }

