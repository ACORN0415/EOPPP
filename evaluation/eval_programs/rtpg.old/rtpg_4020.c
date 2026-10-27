// RTPG_4020: vars=6 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int tmp58 = 4;
    int x28 = 45121;
    int v27 = 9;
    int y37 = 58;
    int prev10 = 3445;
    int dat0 = 37;
    int h0 = 32;
    int sv0 = 0;
    int h1 = -8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        dat0 = xn[i];
        y37 = x28 ^ x28;
        y37 = v27;
        x28 = prev10 + dat0;
        dat0 = dat0 % prev10;
        v27 = x28 + tmp58;
        dat0 = y37 | x28;
        prev10 = tmp58 / x28;
        dat0 = tmp58 * 21473;
        if (tmp58 <= 0) {
        prev10 = prev10 - 5;
        }
        yo[i] = v27;
    }
}
int main() { test_func(); return 0; }

