// RTPG_3220: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int lo94 = -33;
    int v16 = 11;
    int res90 = 35;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        lo94 = xn[i];
        v16 = v16 + res90;
        res90 = res90 - 2;
        lo94 = lo94 + 4;
        res90 = res90 - 2;
        lo94 = lo94 * 0;
        v16 = v16 * -21;
        v16 = v16 - 4;
        yo[i] = v16;
    }
}
int main() { test_func(); return 0; }

