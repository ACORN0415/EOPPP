// RTPG_7548: vars=8 stmts=4
int xn[64];
int yo[64];
void test_func(void) {
    int acc11 = 27948;
    int cur53 = -6;
    int x90 = 8246;
    int dat9 = 83;
    int z45 = 31003;
    int y55 = 11;
    int cur23 = 44;
    int y49 = 56575;
    int i;
    for (i = 0; i < 64; i++) {
        cur53 = xn[i];
        dat9 = dat9 - 1;
        z45 = x90 + dat9;
        acc11 = dat9 - cur23;
        y55 = x90 - y49;
        if (cur53 == 68) {
        cur23 = y49 + dat9;
        }
        yo[i] = y49;
    }
}
int main() { test_func(); return 0; }

