// RTPG_5916: vars=9 stmts=6
int xn[64];
int yo[64];
void test_func(void) {
    int x52 = 30;
    int prev99 = 5;
    double y59 = 29.32;
    int v70 = 54103;
    int cur85 = 0;
    int dat84 = -16;
    int dat70 = 100;
    int tmp4 = -28;
    double cnt2 = 48.80;
    int *ptr = &x52;
    int i;
    for (i = 0; i < 64; i++) {
        cur85 = xn[i];
        dat84 = cur85;
        cur85 = cur85 - 3;
        dat70 = cur85 - cnt2;
        prev99 = dat84 + v70;
        cur85 = cur85 - v70;
        dat84 = dat84 - 4;
        *ptr = *ptr + 3;
        if (v70 <= -16) {
        tmp4 = dat70 + prev99;
        }
        yo[i] = y59;
    }
}
int main() { test_func(); return 0; }

