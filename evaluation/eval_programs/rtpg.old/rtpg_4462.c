// RTPG_4462: vars=3 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int cnt71 = 2;
    double a66 = 53.57;
    int out86 = 37;
    int i;
    for (i = 0; i < 16; i++) {
        out86 = xn[i];
        cnt71 = a66 - 2;
        cnt71 = out86 - cnt71;
        a66 = a66 - 3;
        a66 = a66 - 3;
        cnt71 = a66;
        a66 = a66 - out86;
        if (out86 < -24) {
        cnt71 = out86 - 8;
        }
        yo[i] = a66;
    }
}
int main() { test_func(); return 0; }

