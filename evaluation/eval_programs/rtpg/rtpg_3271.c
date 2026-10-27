// RTPG_3271: vars=3 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int a10 = 62655;
    int sum34 = 1;
    int dat39 = 43714;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 33;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        a10 = xn[i];
        sum34 = a10 * 57;
        a10 = sum34 + a10;
        dat39 = dat39 + a10;
        a10 = a10 * 18;
        sum34 = a10 + sum34;
        dat39 = a10 * 5;
        yo[i] = a10;
    }
}
int main() { test_func(); return 0; }

