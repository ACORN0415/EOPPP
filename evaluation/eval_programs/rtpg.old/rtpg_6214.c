// RTPG_6214: vars=3 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int cur89 = 39;
    int dat3 = 3;
    float dat12 = 25.51;
    int h0 = 37097;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        dat3 = xn[i];
        dat3 = cur89;
        cur89 = dat3 - 2;
        yo[i] = cur89;
    }
}
int main() { test_func(); return 0; }

