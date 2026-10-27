// RTPG_7277: vars=3 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int a13 = 6;
    int res3 = 6;
    int c80 = 25;
    int h0 = 3898;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        res3 = xn[i];
        res3 = res3 + c80;
        c80 = res3 - -49;
        a13 = c80 + a13;
        res3 = res3 - res3;
        res3 = res3 * 7;
        yo[i] = c80;
    }
}
int main() { test_func(); return 0; }

