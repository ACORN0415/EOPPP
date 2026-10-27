// RTPG_7430: vars=3 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int cur59 = 18923;
    int cur11 = 43;
    double dat4 = 64.88;
    int h0 = 42;
    int sv0 = 0;
    int h1 = 78;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        dat4 = xn[i];
        dat4 = cur59 ^ dat4;
        cur11 = cur11 - 3;
        dat4 = cur59 * 8;
        dat4 = dat4 - 1;
        if (cur59 < 16) {
        dat4 = dat4 + 3;
        }
        yo[i] = cur59;
    }
}
int main() { test_func(); return 0; }

