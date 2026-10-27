// RTPG_9280: vars=3 stmts=11
int xn[32];
int yo[32];
void test_func(void) {
    int sum99 = 7;
    int hi71 = -6;
    int dat33 = 85;
    int h0 = 51236;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        hi71 = xn[i];
        dat33 = sum99;
        dat33 = dat33 + hi71;
        dat33 = dat33 * -37;
        dat33 = dat33 - 2;
        dat33 = dat33 - hi71;
        sum99 = dat33 + hi71;
        sum99 = hi71 * -17;
        sum99 = sum99 + 3;
        hi71 = hi71 + 2;
        dat33 = dat33 - 3;
        sum99 = hi71 + hi71;
        yo[i] = sum99;
    }
}
int main() { test_func(); return 0; }

