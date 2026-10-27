// RTPG_1571: vars=6 stmts=5
int xn[16];
int yo[16];
void test_func(void) {
    int val32 = 3;
    int lo49 = 67;
    int acc87 = 70;
    int dat38 = -10;
    int out42 = 25;
    int res79 = -47;
    int h0 = 46;
    int sv0 = 0;
    int h1 = 60;
    int sv1 = 0;
    int h2 = 46;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        lo49 = xn[i];
        lo49 = dat38 + out42;
        dat38 = dat38 + 5;
        dat38 = out42 * 82;
        val32 = acc87 + val32;
        acc87 = val32 * -40;
        yo[i] = dat38;
    }
}
int main() { test_func(); return 0; }

