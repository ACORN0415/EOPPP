// RTPG_991: vars=7 stmts=2
int xn[32];
int yo[32];
void test_func(void) {
    int z75 = 5;
    int lo80 = 19;
    int lo73 = 1;
    int v9 = 8;
    int c11 = 8;
    int tmp77 = 2;
    int sum50 = -9;
    int h0 = 99;
    int sv0 = 0;
    int h1 = 26;
    int sv1 = 0;
    int h2 = 97;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        c11 = xn[i];
        z75 = z75 - 1;
        lo73 = lo73 - 5;
        yo[i] = lo73;
    }
}
int main() { test_func(); return 0; }

