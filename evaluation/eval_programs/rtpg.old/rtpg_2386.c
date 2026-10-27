// RTPG_2386: vars=9 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int b39 = 6;
    int dat90 = 6;
    int z62 = 19;
    int dat41 = 45635;
    int a0 = 4;
    int res83 = 32;
    int v56 = 4;
    int lo5 = 75;
    int out33 = 9;
    int i;
    for (i = 0; i < 16; i++) {
        b39 = xn[i];
        z62 = a0 + out33;
        out33 = v56;
        res83 = res83 - dat90;
        v56 = z62 - res83;
        dat41 = v56 + 7;
        v56 = dat90 + v56;
        b39 = v56 - out33;
        yo[i] = b39;
    }
}
int main() { test_func(); return 0; }

