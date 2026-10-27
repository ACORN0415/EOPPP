// RTPG_4383: vars=8 stmts=2
int xn[64];
int yo[64];
void test_func(void) {
    int dat4 = 32401;
    int cnt32 = 3;
    int v41 = 1046;
    int z0 = 62771;
    int dat95 = 1;
    int hi23 = 2;
    int v65 = 56763;
    int y89 = 43;
    int i;
    for (i = 0; i < 64; i++) {
        y89 = xn[i];
        cnt32 = cnt32 - 2;
        cnt32 = hi23 - y89;
        yo[i] = dat95;
    }
}
int main() { test_func(); return 0; }

