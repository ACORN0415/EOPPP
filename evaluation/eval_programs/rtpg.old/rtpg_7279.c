// RTPG_7279: vars=4 stmts=8
int xn[16];
int yo[16];
void test_func(void) {
    int acc91 = 0;
    int tmp66 = 33;
    int z54 = 21179;
    int dat64 = 78;
    int h0 = 48955;
    int sv0 = 0;
    int h1 = 4;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        z54 = xn[i];
        dat64 = acc91 * -4;
        acc91 = tmp66 + acc91;
        acc91 = dat64 - acc91;
        z54 = dat64 + 40743;
        acc91 = tmp66 * -16;
        z54 = dat64;
        tmp66 = tmp66 - 3;
        z54 = acc91;
        yo[i] = dat64;
    }
}
int main() { test_func(); return 0; }

