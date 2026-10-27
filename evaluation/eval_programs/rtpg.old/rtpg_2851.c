// RTPG_2851: vars=6 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    float dat76 = 60.20;
    int prev33 = 6;
    float out50 = 95.77;
    int cnt23 = -12;
    int lo40 = 39;
    int val46 = 75;
    int h0 = 6;
    int sv0 = 0;
    int h1 = 52;
    int sv1 = 0;
    int h2 = 80;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat76 = xn[i];
        out50 = dat76 * 32;
        cnt23 = val46 * 56738;
        yo[i] = cnt23;
    }
}
int main() { test_func(); return 0; }

