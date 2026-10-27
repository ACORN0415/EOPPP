// RTPG_4519: vars=3 stmts=6
int xn[16];
int yo[16];
void test_func(void) {
    int a66 = 2;
    double out86 = 53.57;
    int cnt71 = 37;
    int i;
    for (i = 0; i < 16; i++) {
        cnt71 = xn[i];
        a66 = out86 - 2;
        a66 = cnt71 - a66;
        out86 = out86 - 3;
        out86 = out86 - 3;
        a66 = out86;
        out86 = out86 - cnt71;
        if (cnt71 < -24) {
        a66 = cnt71 - 8;
        }
        yo[i] = out86;
    }
}
int main() { test_func(); return 0; }

