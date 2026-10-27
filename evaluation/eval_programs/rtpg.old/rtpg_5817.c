// RTPG_5817: vars=9 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int prev99 = 30;
    int cnt2 = 5;
    double x52 = 29.32;
    int dat84 = 54103;
    int cur85 = 0;
    int y59 = -16;
    int v70 = 100;
    int dat70 = -28;
    double tmp4 = 48.80;
    int *ptr = &prev99;
    int i;
    for (i = 0; i < 64; i++) {
        cur85 = xn[i];
        y59 = cur85;
        cur85 = cur85 - 3;
        v70 = cur85 - tmp4;
        cnt2 = y59 + dat84;
        cur85 = cur85 - dat84;
        y59 = y59 - 4;
        *ptr = *ptr + 3;
        if (dat84 <= -16) {
        dat70 = v70 + cnt2;
        }
        yo[i] = x52;
    }
}
int main() { test_func(); return 0; }

