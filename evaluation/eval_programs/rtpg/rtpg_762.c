// RTPG_762: vars=8 stmts=4
int xn[16];
int yo[16];
void test_func(void) {
    int dat79 = 1;
    int x72 = 25385;
    int cur42 = 8;
    int v18 = 7;
    int z58 = -9;
    int res7 = 1;
    int prev66 = 10;
    int b8 = -6;
    int h0 = 78;
    int sv0 = 0;
    int h1 = 56;
    int sv1 = 0;
    int h2 = 2;
    int sv2 = 0;
    int h3 = 82;
    int sv3 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        dat79 = xn[i];
        v18 = dat79 + 27;
        v18 = x72 % prev66;
        prev66 = v18;
        res7 = dat79 - 3;
        yo[i] = z58;
    }
}
int main() { test_func(); return 0; }

