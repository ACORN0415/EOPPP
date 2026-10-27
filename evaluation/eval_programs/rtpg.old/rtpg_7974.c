// RTPG_7974: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int acc80 = 50;
    int prev64 = 24217;
    int out75 = 2;
    int c26 = 8;
    int dat6 = 12;
    int i;
    for (i = 0; i < 32; i++) {
        c26 = xn[i];
        c26 = c26 + 1;
        acc80 = acc80;
        acc80 = dat6 - 9;
        acc80 = acc80 - 5;
        yo[i] = acc80;
    }
done:
    acc80 = 0;
}
int main() { test_func(); return 0; }

