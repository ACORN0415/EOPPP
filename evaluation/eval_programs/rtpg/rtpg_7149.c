// RTPG_7149: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int acc57 = 8;
    int dat9 = 38305;
    int lo3 = 17930;
    int i;
    for (i = 0; i < 32; i++) {
        dat9 = xn[i];
        lo3 = lo3 + dat9;
        lo3 = lo3;
        dat9 = dat9 - lo3;
        lo3 = acc57 - acc57;
        acc57 = acc57 + 1;
        acc57 = acc57 + 1;
        lo3 = lo3 + 1;
        if (dat9 == -38) {
        acc57 = dat9 - acc57;
        }
        yo[i] = dat9;
    }
}
int main() { test_func(); return 0; }

