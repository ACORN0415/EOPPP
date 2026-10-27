// RTPG_3009: vars=6 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int dat3 = -45;
    int cnt35 = 3;
    int out75 = 11381;
    int v88 = 38109;
    int cnt26 = 33;
    int acc18 = 73;
    int i;
    for (i = 0; i < 64; i++) {
        out75 = xn[i];
        v88 = cnt35 + v88;
        cnt35 = out75 - cnt26;
        cnt26 = out75 + cnt35;
        dat3 = dat3 + 1;
        dat3 = cnt26 + cnt35;
        out75 = cnt26;
        dat3 = v88;
        dat3 = cnt35;
        if (dat3 != 33) {
        acc18 = cnt26 + out75;
        }
        yo[i] = dat3;
    }
}
int main() { test_func(); return 0; }

