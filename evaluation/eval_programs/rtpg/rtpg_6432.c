// RTPG_6432: vars=3 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int hi26 = 7;
    int dat18 = 46480;
    int v27 = 44;
    int i;
    for (i = 0; i < 16; i++) {
        dat18 = xn[i];
        v27 = dat18 + dat18;
        v27 = v27 - hi26;
        v27 = v27;
        hi26 = hi26 + dat18;
        dat18 = hi26 + dat18;
        hi26 = dat18 - 3;
        dat18 = v27;
        hi26 = hi26 - v27;
        v27 = v27 - 4;
        dat18 = v27 - v27;
        hi26 = hi26 + v27;
        yo[i] = v27;
    }
}
int main() { test_func(); return 0; }

