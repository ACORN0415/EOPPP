// RTPG_8070: vars=5 stmts=4
int xn[32];
int yo[32];
void test_func(void) {
    int c26 = 50;
    int acc80 = 24217;
    int prev64 = 2;
    int out75 = 8;
    int dat6 = 12;
    int i;
    for (i = 0; i < 32; i++) {
        out75 = xn[i];
        out75 = out75 + 1;
        c26 = c26;
        c26 = dat6 - 9;
        c26 = c26 - 5;
        yo[i] = c26;
    }
}
int main() { test_func(); return 0; }

