// RTPG_374: vars=4 stmts=7
int xn[16];
int yo[16];
void test_func(void) {
    int lo37 = 15;
    int v9 = 64083;
    int v10 = 50;
    int hi62 = 7;
    int h0 = 57317;
    int sv0 = 0;
    int h1 = 14451;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        v9 = xn[i];
        hi62 = v10 - v9;
        v9 = lo37;
        v9 = v10 % lo37;
        v10 = lo37 | hi62;
        hi62 = hi62;
        hi62 = v10;
        lo37 = lo37 - 2;
        yo[i] = v9;
    }
}
int main() { test_func(); return 0; }

