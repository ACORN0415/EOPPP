// RTPG_8651: vars=7 stmts=8
int xn[32];
int yo[32];
void test_func(void) {
    int c55 = 22;
    int res48 = 8;
    int sum85 = -27;
    int dat71 = 33;
    int z88 = 14;
    int prev45 = 13169;
    int acc87 = 43;
    int i;
    for (i = 0; i < 32; i++) {
        z88 = xn[i];
        sum85 = dat71 + 4;
        acc87 = acc87 + 3;
        dat71 = dat71 - 4;
        dat71 = dat71 - 5;
        acc87 = res48 - acc87;
        z88 = res48 - acc87;
        dat71 = dat71 - res48;
        dat71 = prev45 - -15;
        yo[i] = acc87;
    }
}
int main() { test_func(); return 0; }

